#include <iostream>
#include <vector>

using namespace std;

int main () {

    int nidades = 0;
    int idadeaux = 0;
    int j = 0;
    int resultado = 0;
    int soma = 0;

    cout << "que numero de idades quer inserir??";
    cin >> nidades;

    int idades [nidades];

    for (int j=0; j<nidades; j++) {
        cout << "\nQual a idade #"<< (j+1) << ": " ;
        cin >> idadeaux; //idades [j];
        if(idadeaux>0) {
            idades[j]= idadeaux;
            soma = soma + nidades;
        } else {
            j--;
        }


    }
    cout << "A media e: " << ((float)soma) /(float)nidades  << resultado << endl ;


    return 0;

}
