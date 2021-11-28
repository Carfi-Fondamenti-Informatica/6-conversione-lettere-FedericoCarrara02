#include "lib.h"

bool l_o(char &c) {
    //DICHIARAZIONE VARIABILI
    bool b = false;
    if ( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        b = true;
        if (c <= 'Z') { //Lettere maiuscole
            c = c - 'A' + 'a'; //32;
        }
        else { //Viceversa
            c = c - 'a'+'A';
        }
    }
    return b;
}
