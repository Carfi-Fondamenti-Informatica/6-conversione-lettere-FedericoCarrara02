#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    //DICHIARAZIONE VARIABILI

    char i = '0';

    //INPUT VARIABILI

    cin >> i;

    //CHIHAMO FUNZIONE DA LIBRERIA E PASSO IL VALORE IN INPUT

  

    bool conversione = l_o(i);
    if (conversione) {
        cout << i << endl;
    }
    else {
        cout << "errore" << endl;
    }


    return 0;
}

