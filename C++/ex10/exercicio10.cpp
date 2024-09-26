#include <iostream>
#include <vector>

using namespace std;

int main () {
    string arrayletras [3] [9] = {
    {"A", "B", "C", "D", "A", "B", "B", "C", "D"},
    {"A", "B", "C", "D", "A", "B", "B", "C", "D"},
    {"E", "F", "G", "H", "A", "B", "B", "C", "D"}
};

    //MOSTRAR OQUE ESTA NA POSIÇÃO [1][2] DO ARRAY
    for (int x = 0; x < 3 ; x++) {
        for (int i = 0; i < 9 ; i++) {
            cout << "array[" << x << "][" << i << "] = ";
            cout << arrayletras [x] [i] << endl;
        }
    }

    return 0;
}
