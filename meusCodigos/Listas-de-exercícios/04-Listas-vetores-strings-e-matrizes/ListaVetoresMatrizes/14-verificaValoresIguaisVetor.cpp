#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 14 - Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais
e os escreva na tela.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float vet[10];
    int verif = 0;

    //Lendo os 10 valores do vetor.
    cout << "\nINFORME 10 VALORES:\n";
    for(int i = 0; i < 10; i++){
        cout << "Digite o " << (i + 1) << "° valor: ";
        cin >> vet[i];
    }

    //Verificando se existem valores iguais e mostrando na tela.
    for(int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(vet[i] == vet[j]){
                verif++;
            }
        }
        if(verif != 0){
            cout << "O valor " << vet[i] << " possui " << verif << " valor(es) igual/iguais.\n";
        }
        
        verif = 0;
    }
    cout << "\n\n";

    return 0;
}