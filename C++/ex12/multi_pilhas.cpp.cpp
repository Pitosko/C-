#include <iostream>

using namespace std;

int npilhas = 3, nelementos = 10;
string p3lhas[3][10] = {
    {"","","","","","","","","","",},
    {"","","","","","","","","","",},
    {"","","","","","","","","","",}
    };

void mostrapilha () {
    cout << "\nA MINHA PILA" << endl << endl;

    for (int y=nelementos-1; y>=0; y--) {
            for (int x=0; x<npilhas; x++) {
                if (x>0) cout << " | ";
                //cout << "[" << x << "][" << y << "]" ;
                if (p3lhas[x][y] != ""){
                    cout << p3lhas[x][y];
                } else{
                    cout << " ";
                }
            }

        cout << endl;

    }

    cout << "---------" << endl;
    for (int x=0; x<npilhas; x++) {
        if (x> 0 ) cout << " | ";
        cout << x;
    }

}

void pedirelemento () {
    int qualpilha;
    string elemento;
    bool encontroulivre = false;

    cout << "\n\nEm que pila  quer colocar o elemento (0/1/2)? : ";
    cin >> qualpilha;

    cout << "\nQual o elemento a colocar na pila[" << qualpilha << "] : " ;
    cin >> elemento;

    for (int i=0; i<nelementos; i++) {
        if (p3lhas [qualpilha][i] == ""){
            p3lhas [qualpilha][i] = elemento;
            encontroulivre = true;
            break;
        }
    }
    if (!encontroulivre) {
        cout << "\n\nA pilha [" << qualpilha << "] nao tem posicoes livres";
    }

}


    int main () {

    int op=0;

    do{
        cout << "\nOque pretende fazer?\n";
        cout << "1 - inserir elemento em pila\n";
        cout << "2 - mostrar pila\n";
        cout << "0 - Sair\n";
        cin >> op;
        switch (op){
            case 1:
                pedirelemento();
                break;
            case 2:
                mostrapilha();
                break;
            default: break;
        }
    }while (op!=0);

    return 0;

    }
