#include <iostream>

using namespace std;

int main () {
    int numero, somar;

    cout << "quais os numeros a somar?";
    cin >> numero ;
    cin >> somar ;

    int i = 1;

    int resultado = 1;

    if (numero > 1) {

        do {
            (resultado += numero);
            i++;
        }
        while(i <= numero);
    }
    cout << "\nResultado com o do while:" << resultado << endl;


    return 0;
}
