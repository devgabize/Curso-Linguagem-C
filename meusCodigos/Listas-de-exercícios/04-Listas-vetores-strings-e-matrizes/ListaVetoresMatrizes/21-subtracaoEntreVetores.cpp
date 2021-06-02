#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 21 - Faça um programa que receba do usuário dois vetores, A e B, com 10 números inteiros
cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
do vetor C.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int A[10], B[10], C[10];

    //Lendo os valores do vetor A.
    cout << "\nINFORME 10 VALORES PARA O VETOR A:\n";
    for(int i = 0; i < 10; i++){
        cout << "DIGITE UM VALOR: ";
        cin >> A[i];
    }

    //Lendo os valores do vetor B.
    cout << "\nINFORME 10 VALORES PARA O VETOR B:\n";
    for(int i = 0; i < 10; i++){
        cout << "DIGITE UM VALOR: ";
        cin >> B[i];
    }

    //Preenchendo o vetor C com o resultado dos cálculos entre os vetores A e B.
    for(int i = 0; i < 10; i++){
        C[i] = A[i] - B[i];
    }

    //MOstrando o vetor C na tela.
    cout << "\nVETOR C: { ";
    for(int i = 0; i < 10; i++){
        cout << C[i] << " ";
    }
    cout << "}\n\n";

    return 0;
}