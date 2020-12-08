#include <iostream>

class IntStack {

public:

  IntStack (int len) : taille(len), top(0) {
    if (len>0) {
      tab = new int [taille];
    }
    else {
      std::cout << "taille nulle";
      throw(0);
    }
  }

  void push (int token) {
    if (not is_full()) {
      tab[top] = token;
      top = top + 1;
    }
    else {
      std::cout << "pile pleine";
      throw(1);
    }
  }

  int pop ();

  bool is_full () {
    return top == taille;
  }

  bool is_empty () {
    return top == 0;
  }

  void print () {
    std::cout << '[';
    for (int k = 0; i < top; i++) {
      std::cout << tab[i] << ' ';
    }
    std::cout << '[';
  }

  void delete_stack () {
    delete [] tab;
  }

private:
  
  int *tab;
  int taille;
  int top;

};

inline int InStack::pop () {
  if (not is_empty()) {
    top = top - 1;
    return tab[top];
  }
  else {
    std::cout << "pile vide" << '\n';
    throw(2);
  }
}