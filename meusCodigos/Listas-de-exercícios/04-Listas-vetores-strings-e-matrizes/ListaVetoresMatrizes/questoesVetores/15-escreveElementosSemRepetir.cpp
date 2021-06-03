#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 15 - Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando ele-
mentos repetidos.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int vet[20], verif = 0, repet[20], imprim = 0;

    //Lendo os 20 valores inteiros e armazenando no vetor.
    cout << "\nINFORME 20 NÚMEROS INTEIROS:\n";
    for(int i = 0; i < 20; i++){
        cout << "Digite o " << (i + 1) << "° número inteiro :";
        cin >> vet[i];
    }

    //Verificando os elementos repetidos e suas posições.
    for(int i = 0; i < 20; i++){
        for(int j = i + 1; j < 20; j++){
            if(vet[i] == vet[j]){
                repet[verif] = j;
                verif++;
            }
        }
    }

    cout << "VETOR DIGITADO: { ";
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < verif; j++){
            if(i == repet[j]){
                imprim++;
            }
        }
        if(imprim == 0){
            cout << vet[i] << " ";
        }
        imprim = 0;
    }
    cout << "}\n\n";

    //cout << "VETOR DIGITADO: { ";
    //cout << "}\n\n";

    return 0;
}