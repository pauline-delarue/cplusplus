#include<iostream>
int main () {
  char c = '\0'; // j'initialise une variable
                 // de type char avec le caractère null

  while (c != 'q') { // tant que ce caractère n'est pas 'q'
    std::cin >> c;   // je lis un caractère
    std::cout << c << std::endl; // je l'affiche
  }
  return 0;
}