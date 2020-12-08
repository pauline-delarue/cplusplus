// On teste les 3 cas d'erreurs dans cette fonction: 
// pile de taille nulle, 
// pile qu'on essaie de push mais qui est pleine, 
// pile qu'on essaie de pop mais qui est vide

#include <iostream>
#include "intstack.h"

int caserreur () {
    IntStack* st1 = new IntStack (0);
    IntStack* st2 = new IntStack (1);
    IntStack* st3 = new IntStack (1);
    (*st2).push(23);
    (*st3).push(14);
    (*st2).push(46);
    (*st3).pop();
    (*st3).pop();
    delete st1;
    delete st2;
    delete st3;
}

int test () {
    IntStack* cool = new IntStack (2);
    (*cool).print();
    (*cool).push(3);
    (*cool).print();
    (*cool).push(4);
    (*cool).print();
    (*cool).pop();
    (*cool).print();
}

int main () {
    //std::cout << caserreur();
    std::cout << test (); 
    return 0;
}

// je ne sais pas comment tester tout dans la même fonction
// donc à chaque fois je mets des // pour sélectionner les tests
// que je ne veux pas faire