#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

map <const char, string> mymap {
    {'A', ".- "},
    {'B', "-... "},
    {'C', "-.-. "},
    {'D', "-.. "}, 
    {'E', ". "},
    {'F', "..-. "},
    {'G', "--. "},
    {'H', ".... "}, 
    {'I', ".. "},
    {'J', ".--- "},
    {'K', "-.- "},
    {'L', ".-.. "},
    {'M', "-- "},
    {'N', "-. "},
    {'O', "--- "},
    {'P', ".--. "},
    {'Q', "--.- "},
    {'R', ".-. "},
    {'S', "... "},
    {'T', "- "},
    {'U', "..- "},  
    {'V', "...- "},
    {'W', ".-- "},
    {'X', "-..- "},
    {'Y', "-.-- "},
    {'Z', "--.. "},
    {' '," "}
    };

string french_to_morse (string french) {
    string morse;
    int len = french.size();
    for (int i=0; i<len; i++) {
        char letter = french[i];
        morse += mymap[letter];
    }
    return morse;
}

string morse_to_french (string morse) {
    string french;
    int len = morse.size();
    int i = 0;
    string morse_letter;
    while (i < len) {
        while (morse[i] != ' ') {
            morse_letter += morse[i];
            i += 1;
        }
        char french_letter = mymap[morse_letter];
        french += french_letter;
        morse_letter = "";
    }
    return french;
}