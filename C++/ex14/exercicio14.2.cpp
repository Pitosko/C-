#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h> // printf, scanf,puts,NULL

using namespace std;

void trocaNumeros(int &num1, int &num2) {
    int aux = num1;
    num1 = num2;
    num2 = aux;
}

int main () {

    int x, y;

    x = 10;
    y = 200;

    cout << "Valor em x: " << x << endl;
    cout << "Valor em y: " << y << endl;
    trocaNumeros (x, y);
    cout << "Valor em x: " << x << endl;
    cout << "Valor em y: " << y << endl;


    return 0;

}
