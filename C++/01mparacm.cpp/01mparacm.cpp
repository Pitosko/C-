#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h> // printf, scanf,puts,NULL

using namespace std;


int main () {

    int resultado;
    int aux;
    int op;
    int numero;
    int converter;

    if (numero < '0') {
            cout << endl << "Qual o numero a converter? ";
            cout << endl << "R: ";
            cin >> numero;
            do {
            numero = (numero,00);
            } while (numero >= 0) ;
            cout << endl << "Resultado: " << resultado;
    }

    return 0;
}
