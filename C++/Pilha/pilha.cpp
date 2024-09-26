#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

int posicao=6;
string pilha[6];

void push() {
    if (posicao<6) {
        cout << "\n NUMERO A INSERIR NA PILHA";
        cin >> pilha[posicao];
        posicao ++;
        system("CLS");
    } else {
        cout << "\n NAO TEM POSICOES LIVRES NA PILHA ";
        cout << "tem que retirar antes de colocar";
    }
}

void pop() {
        if (posicao>0) {
            cout << "\n retirou o numero a : ";
            cout << pilha[posicao-1] << endl << endl;
            posicao --;
        } else {
            cout << "\n NAO TEM POSICOES LIVRES NA PILHA ";
        }
}


void top () {
    if (posicao > 0 ) {
        cout << "TOP =" << pilha[posicao-1] << endl;
    } else {
        cout << "\n NAO TEM ELEMENTOS NA PILHA \n\n";
    }
}

void mostrarpilha () {
    for (int i=0; i<posicao; i++) {
        cout << "Pilha [" << i << "] =" << pilha [i] << endl;
    }
}


int main () {

    int op, continua=true;

    do {
        cout << "PILHAS";
        cout << "Oque pretende fazer?\n";
        cout << "\nPressione 1 para adiconar um numero: ";
        cout << "\nPressione 2 para remover um numero: \n";
        cout << "\nPressione 3 para ver a pilha: \n";
        cout << "\nPressione 4 para mostar a pilha: \n";
        cout << "* qualquer outra tecla sai do programa \n \n";


        cout << "R:";
        cin >> op;

        switch (op) {

            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                top();
                break;
            case 4:
                mostrarpilha();
                break;
            default:
                continua = false;
                break;



        }

    }while (continua);



        return 0 ;


}
