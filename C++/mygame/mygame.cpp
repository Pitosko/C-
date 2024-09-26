#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;



void iniciojogo () {

    // mensagens e in/out de msgs
    // captação de decisões do utilizador
}

bool terminoujogo () {
    // verificar se o jogo terminou
    // alguem ganhou?? // tabuleiro cheio???
}


bool tabuleiropreenchido (){

}

bool alguemganhou () {

}

void mostrartabuleiro (string tabuleiro[], int linhas = 8,int colunas = 6) {
    cout << tabuleiro << {"","","","","",""},
                        {"","","","","",""},
                        {"","","","","",""},
                        {"","","","","",""},
                        {"","","","","",""},
                        {"","","","","",""},
                        {"","","","","",""},
                        {"","","","","",""}
                        };

    cout << "\nA MINHA PILA" << endl << endl;

    for (int y=linhas-1; y>=0; y--) {
            for (int x=0; x<colunas; x++) {
                if (x>0) cout << " | ";
                //cout << "[" << x << "][" << y << "]" ;
                if (tabuleiro[x][y] != ""){
                    cout << tabuleiro[x][y];
                } else{
                    cout << " ";
                }
            }

        cout << endl;

    }

    cout << "---------" << endl;
    for (int x=1; x<colunas; x++) {
        if (x> 0 ) cout << " | ";
        cout << x;
    }

}

int main () {
    int linhas = 8, colunas = 6;
    string tabuleiro [8] [6]{
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""},
    {"","","","","",""}
    };



    mostrartabuleiro(tabuleiro, linhas, colunas);

    bool tabuleiropreenchido = false;
    bool jogoterminou = false;

    mostrartabuleiro();

    do {
        iniciojogo();
    }while (!jogoterminou);
    return 0;
}


