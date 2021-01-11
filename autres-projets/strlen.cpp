# include <iostream>

int main () {
    char c[100];
    std::cout << "entrez une chaîne de caractères:";
    std::cin >> c;

    char var = c[0];
    int i = 0;

    while (var != '\0') {
        i = i+1;
        var = c[i];
    }
    std::cout << i << '\n';
    return 0;
}