#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h> // printf, scanf,puts,NULL

using namespace std;

int main () {

    string varx = "Joao";
    string* vary = &varx;


    cout << "Varx = " << varx  << endl;
    cout << "Varx na posicao de memoria : " << varx  << endl;

    cout << "Vary (referencia de memoria?) : " << vary  << endl;
    cout << "Vary (esta a apontar para Varx) = " << *vary << endl;

    *vary = "Moreira";

    cout << "Varx = " << varx  << endl;
    cout << "Varx na posicao de memoria : " << varx  << endl;

    cout << "Vary (referencia de memoria?) : " << vary  << endl;
    cout << "Vary (esta a apontar para Varx) = " << *vary << endl;


    return 0;

}
