#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

string conv_array_string(string meuarray[], int inicio, int tamanho){

    if (inicio < tamanho) {
        return meuarray[inicio] + conv_array_string(meuarray, inicio+1, tamanho);
    } else {
        return "";
    }

}

int main () {

    string meuarray[4] = {"J","O","A","O"};
    int tamanho = 4;
    cout << conv_array_string(meuarray, 0, tamanho);

    return 0;

}

