// in file swap.cpp
#include<iostream>
void swap (int *x, int *y) {
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main () {
   int a = 12;
   int b = 81;
   std::cout << a << ' ' << b << std::endl;
   // affiche 12 81 
   swap (a, b);
   std::cout << a << ' ' << b << std::endl;
   // affiche 81 12
}

//bash
//$ g++ swap.cpp -o swap
//$ swap
//12 81
//81 12