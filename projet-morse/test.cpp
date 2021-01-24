#include "fonctions.h"

int main () {

    std::cout << "Entrez:" << std::endl;
    std::cout << "1: si vous souhaitez traduire du français au morse" << std::endl;
    std::cout << "2: si vous souhaitez traduire du morse au français" << std::endl;
    std::cout << "Bonne journée!" << std::endl;
    int n;
    std::cin >> n;

    if (n == 1) {
        std::cout << "Saisissez votre texte en français:" << std::endl;
        string text;
        cin.ignore ();
        getline (cin,text);
        std::cout << french_to_morse(text) << std::endl;
    }

    else if (n == 2) {
        std::cout << "Saisissez votre texte en morse:" << std::endl;
        string text;
        cin.ignore ();
        getline (cin,text);
        std::cout << morse_to_french(text) << std::endl;
    }

    return 0;
}