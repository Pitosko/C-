#include <iostream>

using namespace std;


void naodevolvenada () {
}

int devolveinteiro () {
}

int devolveinteiro_recebeinteiro() {
}

int factorial(int numero){
    if (numero>=1) {
        return numero * factorial(numero -1);
    }else {
        return 1;
    }
}

int potencia (int base, int expoente) {
    if (expoente> 1) {
        return base * potencia(base, expoente -1);
    }else if (expoente == 0) {
        return 1;
    } else {
        return base;
    }
}

int * inverterarray (int omeuarray[], int inicio, int fim) {
    int aux;
    if (inicio < fim) {
        aux = omeuarray[inicio];
        //omeuarray[inicio] = omeuarray[fim];
        //omeuarray[fim] = aux;
        inverterarray(omeuarray, (inicio+1), (fim-1));
    }

}



int main () {

    int aux;
    int arrayNum[11] = {1,2,3,4,55,6,7,8,9,10};

    int inicio = 0, fim= 9;

    inverterarray(arrayNum, inicio, fim);


    /*while (inicio < fim) {

        aux = arrayNum[inicio];
        arrayNum[inicio] = arrayNum[fim];
        arrayNum[fim] = aux;

        inicio = inicio +1;
        fim = fim -1;
    }

    aux = arrayNum[0];
    arrayNum[0] = arrayNum[9];
    arrayNum[9] = aux;
    */
    for(int i=0; i<10; i++) {
        cout << arrayNum[i] << endl;
    }

    //cout << factorial(4) << endl;
    //cout << potencia(2,3) << endl;
    //cout << potencia(2,3) << endl;


    return 0;
}
