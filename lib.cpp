#include "lib.h"
#include <string>
using namespace std;

string l_o(char &c) {
    //DICHIARAZIONE VARIABILI
    string b = "False";
    if ( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        b = "Vero";
        if (c <= 'Z') { //Lettere maiuscole
            c = c - 'A' + 'a'; //32;
        }
        else { //Viceversa
            c = c - 'a'+'A';
        }
    }
    return b;
}

