#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h> // printf, scanf,puts,NULL

using namespace std;

struct fAluno {

    int numeroAluno;
    string nomeAluno;
    int anosAluno;
};

struct fNota {

    string disciplina;
    string modulo;
    int notaModulo;
};


int main () {

    fAluno fichaAluno;
    fichaAluno.numeroAluno = 123456;
    fichaAluno.nomeAluno = "Joao Moreira";
    fichaAluno.anosAluno = 24;

    cout << "Aluno : " << fichaAluno.nomeAluno;
    cout << ", tem o numAluno : " << fichaAluno.numeroAluno;
    cout << " e tem" << fichaAluno.anosAluno << " anos." << endl;

    fAluno fichaAluno2;
    fichaAluno2.numeroAluno = 654321;
    fichaAluno2.nomeAluno = "Moreira Joao";
    fichaAluno2.anosAluno = 14;

    cout << "Aluno : " << fichaAluno2.nomeAluno;
    cout << ", tem o numAluno : " << fichaAluno2.numeroAluno;
    cout << " e tem" << fichaAluno2.anosAluno << " anos." << endl;

    fNota notaAluno1Disciplina1;
    notaAluno1Disciplina1.disciplina = "Programacao";
    notaAluno1Disciplina1.modulo = "C++ Iniciacao";
    notaAluno1Disciplina1.notaModulo = 0;

    return 0;
}
