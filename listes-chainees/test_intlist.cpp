#include <iostream>
#include "intlist.h"

int main(){
    IntList list;
    list.add_front(1);
    list.print();
    list.add_front(0);
    list.add_back(4);
    list.print();
    list.remove_front();
    list.remove_back();
    list.print();
    std::cout << std::boolalpha << list.search(2) << std::endl;
    std::cout << std::boolalpha << list.search(3) << std::endl;
    list.add_front(23);
    list.print();
    list.remove(1);
    list.print();
    return 0;
}