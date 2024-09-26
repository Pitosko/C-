#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

void iniciojogo() {
    cout << "Bem vindo ao jogo";
}

int main () {

    bool tabuleiro preenchido = false;
    bool gameover = false;

    int escolhaX, escolhaY;

    do {
        iniciojogo();
        cin << escolhaX;
        cin << escolhaY;

    } while (!gameover);

    return 0



}
