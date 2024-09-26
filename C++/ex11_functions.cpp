#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h> // printf, scanf,puts,NULL

using namespace std;

int resultado= 0;

void soma() {
    int num1, num2;
    cout << "Soma de 2 numeros inteiros\n";
    cout << "1.NUM\n";
    cin >> num1;
    cout << "2,NUM\n";
    cin >> num2;

    cout << "SOMAS =" << (num1 + num2) << endl << endl;
}

void subtrair() {
    int num1, num2;
    cout << "Subtracao de 2 numeros inteiros\n";
    cout << "1.NUM\n";
    cin >> num1;
    cout << "2,NUM\n";
    cin >> num2;

    cout << "Subtrair =" << (num1 - num2) << endl << endl;
}

double dividir () {
    int num1, num2;

    cout <<"Divisao de 2 numeros inteiros\n";
    cout << "1.NUM\n";
    cin >> num1;
    cout << "2.NUM \n";
    cin >> num2;

    return (double) num1/ (double) num2;

}

double multiplicar (int x, int y) {

    return (double) x* (double) y;

}

int main () {

    int i = '0', num1, num2;
    do {
        printf("Qual a operacao que deseja efetuar? \n");
        printf("1 - Somar \n");
        printf("2 - Subtrair\n");
        printf("3 - dividir\n");
        printf("4 - multiplicador\n");
        scanf("%d", &i);
        switch (i) {
            case 1:
                soma();
                break;
            case 2:
                subtrair();
                break;
            case 3:
                resultado = dividir ();
                cout << "\nResultado: " << resultado << endl << endl;
            case 4:
                cout << "multiplicacao de 2 numeros inteiros\n";
                cout << "1.NUM\n";
                cin >> num1;
                cout << "2.NUM\\n";
                cin >> num2;
                resultado = multiplicar (num1, num2);
                cout << "\nResultado: " << resultado << endl << endl;
                break;

        }

    }while (i != '0');


    return 0;
}
