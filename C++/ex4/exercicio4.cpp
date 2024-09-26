#include <iostream>
using namespace std;

/** função de inicialização do programa **/

int main() {

    string nome;
    string sobrenome;
    string nomecompleto;

    nome = "Joao ";
    sobrenome = "Moreira";

    //dar espaços nas frases

    //nomecompleto = nome + " " + sobrenome;
    //nomecompleto = nome.append (" ").append(sobrenome);
    nomecompleto = nome;
    nomecompleto += " ";
    nomecompleto += sobrenome;

    //comprimento de x coisa
    cout << nomecompleto;
    cout << ", o teu nome tem " << (nomecompleto.length() - 1);
    //cout << ", o teu nome tem " << (nomecompleto.size() - 1);
    cout << " caracteres";

    //posição selecionada da string
    cout <<"\n\nA primeira letra do teu sobrenome e:";
    cout << sobrenome[0] << " " << sobrenome [2];

    //Alterar caractere selecionado
    sobrenome[2] = '-';
    cout <<"\n\nA primeira letra do teu sobrenome e:";
    cout << sobrenome[0] << " " << sobrenome [2];

    //Caracteres especiais
    string txt = "\nEu sou o maior \"da turma\".";
    cout << endl << txt;

}
