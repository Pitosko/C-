#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main () {

    int binario = 0, decimal = 0, conversao, resto, x;
    char resposta, A, B ;

    cout << "Que numero deseja converter?";
    cin >> conversao;
    cout << "\nPressione A para passar de binario para decimal " << endl;
    cout << "\nPressione B para passar de decimal para binario " << endl;
    cin >> resposta;

    while(resposta =  B) {
        x= conversao / 2;

        resto= resposta - (x*2);
        cout << x;
        bin = resto + binario; "1";


    }


    return 0;
}
