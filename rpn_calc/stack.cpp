# include <iostream>

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