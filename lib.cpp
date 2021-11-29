#include "lib.h"
#include <string>
using namespace std;

string l_o(char &c) {
    //DICHIARAZIONE VARIABILI
    string b = "False";
    
    if (c >= 'A' && c <= 'Z') {
        b = "Vero";
        c = c - 'A' + 'a';

    }
    else if (c >= 'a' && c <= 'z') {
        b = "Vero";
        c = c - 'a'+'A';
    }
    
    return b;
}

