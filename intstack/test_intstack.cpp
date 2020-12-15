// On teste les 3 cas d'erreurs dans cette fonction: 
// pile de taille nulle, 
// pile qu'on essaie de push mais qui est pleine, 
// pile qu'on essaie de pop mais qui est vide

#include <iostream>
#include "intstack.h"

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
    try {
        IntStack* st1 = new IntStack (0);
    }
    catch (int i) {
        std::cout << i << std::endl;
    }
    try {
        IntStack* st2 = new IntStack (1);
        (*st2).push(23);
        (*st2).push(46);
    }
    catch (int i) {
        std::cout << i << std::endl;
    }
    try {
        IntStack* st3 = new IntStack (1);
        (*st3).push(14);
        (*st3).pop();
        (*st3).pop();
    }
    catch (int i) {
        std::cout << i << std::endl;
    }
    std::cout << test (); 
    return 0;
}