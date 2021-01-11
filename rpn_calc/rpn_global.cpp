# include <iostream>

bool is_operande(char* token) {
    return ((token[0] >= '0') and (token[0] <= '9'));     // token = argument de la ligne de commande
}

void push (int tab[],int token2,int* adrtop) {
    tab[*adrtop +1] = token2;
    *adrtop = *adrtop + 1;
}

int pop (int tab[],int* adrtop) {
    *adrtop = *adrtop -1;
    return tab[*adrtop +1];
}

int* init_stack (int argc) {
    int* tab = new int[argc];
    return tab;
}

void delete_stack (int tab[]) {
    delete [] tab;
}

void print_stack (int* tab,int* adrtop) {
    std::cout << '[' << ' ';
    for (int j=0; j < *adrtop +1; j++) {
        std::cout << tab[j] << ' ';
    }
    std::cout << '[' << std::endl;
}

int rpn_eval (int argc,char* argv[]) {
    int* tab = init_stack (argc);          // tab = la pile
    int top = -1;           // top indique l'indice du haut de la pile
    int* adrtop = &top;         // on va manipuler *adrtop (adrtop = adresse de top) au lieu de top
    for (int i=1; i<argc; i++) {            // pour chaque terme de la ligne de commande
        if (is_operande(argv[i]) == 1) {            // si c'est un opérande on le push
            push (tab, atoi(argv[i]), adrtop);
        }
        else if ((is_operande(argv[i]) == 0) and (argv[i][0] == '!')) {    // sinon on fait l'opération correspondante
            int nouveau = - pop (tab, adrtop);                             // en dépilant 1 ou 2 opérandes
            push (tab, nouveau, adrtop);
        }
        else if ((is_operande(argv[i]) == 0) and (argv[i][0] != '!')) {
            int nouveau = pop (tab,adrtop);
            int nouveau2 = pop (tab,adrtop);

            if (argv[i][0] == '+') {
                int valeur = nouveau + nouveau2; 
                push (tab, valeur, adrtop);
            }
            else if (argv[i][0] == '-') {
                int valeur = nouveau2 - nouveau; 
                push (tab, valeur , adrtop);
            }
            else if (argv[i][0] == 'x') {
                int valeur = nouveau * nouveau2; 
                push (tab, valeur, adrtop);
            }
            else if (argv[i][0] == '/') {
                int valeur = nouveau2 / nouveau; 
                push (tab, valeur , adrtop);
            }
        }
        print_stack(tab,adrtop);
    }
    int valeur = tab[0];
    delete_stack(tab);
    return valeur;      // la pile ne contient plus qu'un élément, le résultat final
}

int main (int argc, char* argv[]) {
    std::cout << rpn_eval(argc, argv) << '\n';
    return 0;
}