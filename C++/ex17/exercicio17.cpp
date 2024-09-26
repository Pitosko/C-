#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h> // printf, scanf,puts,NULL

using namespace std;

struct carros {

    string marca;
    string modelo;
    string versao;
    string matricula;
    int ano;
    string proprietario;
};

string darIdadeDaMedia (double mediaIdadeCalculada) {
    int ano = mediaIdadeCalculada;
    int meses = -1;
    int dias = -1;

    double diasMeses = 365.0/12.0
    cout << "1 mes tem : " << diasMeses << "dias \n"

    meses = (mediaIdadeCalculada - ano) * 365.00/diasMeses;

    double oquefalta = meses * diasMeses;
    cout << "falta calcular " << oquefalta << "dias \n"

    string retornar =  "";
    retornar += to_string(ano) + "anos ";
    retornar += to_string(meses) + "meses ";
    retornar += to_string(dias) + "dias ";
    return retornar;
}

int main () {

    double media= 0;
    double mediaIdade= 0;



    carros popos;
    popos.marca = "Audi";
    popos.modelo = "A3";
    popos.versao = "0.5.0";
    popos.matricula = "1234AA";
    popos.ano = 2003;
    popos.proprietario = "Manuel Domingos";

    /*cout << "A marca do carro e " << popos.marca;
    cout << ", o modelo e " << popos.modelo;
    cout << ", a versao e " << popos.versao;
    cout << ", a matricula " << popos.matricula;
    cout << ", o ano e " << popos.ano;
    cout << " e o proprietario e " << popos.proprietario;*/

    carros popos1;
    popos1.marca = "Ferrari";
    popos1.modelo = "XPTO";
    popos1.versao = "589";
    popos1.matricula = "1234AA";
    popos1.ano = 2006;
    popos1.proprietario = "Manuel Domingos";

    /*cout << "A marca do carro e " << popos1.marca;
    cout << ", o modelo e " << popos1.modelo;
    cout << ", a versao e " << popos1.versao;
    cout << ", a matricula " << popos1.matricula;
    cout << ", o ano e " << popos1.ano;
    cout << " e o proprietario e " << popos1.proprietario;*/

    carros popos2;
    popos2.marca = "citroen";
    popos2.modelo = "socio";
    popos2.versao = "JT";
    popos2.matricula = "1234AA";
    popos2.ano = 2016;
    popos2.proprietario = "Manuel Domingos";

    /*cout << "A marca do carro e " << popos2.marca;
    cout << ", o modelo e " << popos2.modelo;
    cout << ", a versao e " << popos2.versao;
    cout << ", a matricula " << popos2.matricula;
    cout << ", o ano e " << popos2.ano;
    cout << " e o proprietario e " << popos2.proprietario;*/

    carros popos3;
    popos3.marca = "BMW";
    popos3.modelo = "JASUS";
    popos3.versao = "Vrumvrum";
    popos3.matricula = "1234AA";
    popos3.ano = 2018;
    popos3.proprietario = "Manuel Domingos";

    /*cout << "A marca do carro e " << popos3.marca;
    cout << ", o modelo e " << popos3.modelo;
    cout << ", a versao e " << popos3.versao;
    cout << ", a matricula " << popos3.matricula;
    cout << ", o ano e " << popos3.ano;
    cout << " e o proprietario e " << popos3.proprietario;*/

    media = (popos.ano + popos1.ano + popos2.ano + popos3.ano ) /4.0;
    mediaIdade = 2024 - media;

    cout << "MEDIA DE ANOS DOS CARROS = " << media << ".\n\n";
    cout << "MEDIA DA IDADE DOS CARROS = " << mediaIdade << " anos.\n\n";
    cout << "MEDIA DA IDADE DOS CARROS = " <<  << " anos.\n\n";
}
