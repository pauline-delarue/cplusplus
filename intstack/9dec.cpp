//#include <iostream>

//void swap_ref (int& r1,int& r2) {
    //int i = r1;
    //r1 = r2;
    //r2 = i;
//}

#include <iostream>
#include "intstack.h"

int main () {
    IntStack he (1);
    IntStack hehe = he;
    he.push(20);
    hehe.push(10);
    he.print();
    hehe.print();
    return 0;
}