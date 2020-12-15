#include <iostream>

class IntStack {

public:

  IntStack (int len) : taille(len), top(0) {
    if (len>0) {
      tab = new int [taille];
    }
    else {
      throw("taille nulle");
    }
  }

    IntStack (const IntStack& rst): taille(rst.taille), top(rst.top), tab(new int[taille]) {
    for (int i = 0; i < top; i++) {
      tab[i] = rst.tab[i];
    }
  }

  ~IntStack () {
    delete [] tab;
  }

  void push (int token) {
    if (not is_full()) {
      tab[top] = token;
      top = top + 1;
    }
    else {
      throw("pile pleine");
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
    for (int k = 0; k < top; k++) {
      std::cout << tab[k] << ' ';
    }
    std::cout << '[';
  }

private:
  
  int *tab;
  int taille;
  int top;

};

inline int IntStack::pop () {
  if (not is_empty()) {
    top = top - 1;
    return tab[top];
  }
  else {
    throw("pile vide");
  }
}
