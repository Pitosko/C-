#include <iostream>

using namespace std;

int main () {
    int i = 0;

    while (i < 0) {
        cout << "instrucao: " << i << "\n";
        i++;
    }
string nome = "joao";
    while(i < 4) {
        cout << nome[i] << endl;
        i = i + 1;
    }
    int base, expoente;

    cout << "Base a esponciar:";
    cin >> base ;
    cout << "Qual o expoente";
    cin >> expoente;

    int resultado = 1;
    i=1;
    while (i <= expoente) {
        resultado *= base;
    }
    cout << "\nResultado com o While: " << resultado;

    int resultado = 1;
    i = 1;
    if (expoente > 0) {
        do {
            resultado *= base;
            i++;
        }
        while(i <= expoente);
    }
    cout << "\nResultado com o do while:" << resultado << endl;

    return 0;

}
