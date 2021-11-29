#include <iostream>
#include "lib.h"
#include <string>
using namespace std;

int main() {
    //DICHIARAZIONE VARIABILI
    //B è IL VERO O FALSO RICHIESTO, D IL CARATTERE INSERITO TRASFORMATO, I L'INPUT

    char i = '0';

    //INPUT VARIABILI

    cin >> i;

    string conversione = l_o(i);
    if (conversione.compare("Vero") == 0) {
        cout << i << endl;
    }
    else {
        cout << "errore" << endl;
    }


    return 0;
}

