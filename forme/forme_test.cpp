# include <iostream>
# include "forme.h"

int main () {
    Cercle c (2,2,1);
    std::cout << c.area() << std::endl;
    Rectangle r (5,5,3,4);
    std::cout << r.area() << std::endl;
    return 0;
}