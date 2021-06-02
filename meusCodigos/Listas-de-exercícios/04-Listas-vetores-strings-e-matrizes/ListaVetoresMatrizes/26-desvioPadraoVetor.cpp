#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<locale.h>
#include<iomanip> //Para definir precisão de casas decimais.

/*QUESTÃO 26 - Faça um programa que calcule o desvio padrão de um vetor v contendo n = 10 números,
onde m é a media do vetor.
Desvio Padrão = sqrt((1 / (n-1))*somatorio(v[i] - m)²)*/

using namespace std;

int main(){
    //Definindo precisão das casas decimais.
    cout << fixed << setprecision(2);

    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float v[3], desPadrao, soma = 0, m, somatorio = 0;

    //Lendo valores do vetor.
    cout << "\nDIGITE 10 VALORES PARA CALCULAR O DESVIO PADRÃO.\n";
    for(int i = 0; i < 3; i++){
        cout << "Digite um valor: ";
        scanf("%f", &v[i]);
        soma += v[i];
    }

    //Calculando média do vetor.
    m = soma / 3.0;

    //Calculando o somatório.
    for(int i = 0; i < 3; i++){
        somatorio += pow((v[i] - m), 2);
    }

    //Calculando desvio padrão.
    desPadrao = sqrt((1.0 / (3 - 1))* somatorio);

    //Mostrando resultado do desvio padrão.
    cout << "\nDESVIO PADRÃO: " << desPadrao << "\n\n";



}
