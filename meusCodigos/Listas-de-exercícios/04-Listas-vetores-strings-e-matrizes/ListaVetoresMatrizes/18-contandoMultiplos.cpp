#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 18 - Faça um programa que leia um vetor de 10 números. Leia um número x. Conte os
múltiplos de um número inteiro x num vetor e mostre-os na tela.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int vet[10], qtdMultiplo = 0, x;

    //Lendo os 10 valores do vetor.
    cout << "\nINFORME 10 VALORES:\n";
    for(int i = 0; i < 10; i++){
        cout << (i + 1) << "º valor: ";
        cin >> vet[i];
    }

    //Lendo o valor x.
    cout << "\nINFORME AGORA UM VALOR INTEIRO: ";
    cin >> x;

    //Analisando o vetor e imprimindo os múltiplos de x.
    cout << "MÚLTIPLOS: { ";
    for(int i = 0; i < 10; i++){
        if(vet[i] % x == 0){
            cout << vet[i] << " ";
            qtdMultiplo++;
        }
    }
    cout << "}\n";
    cout << qtdMultiplo << " múltiplos!\n\n";
    return 0;
}