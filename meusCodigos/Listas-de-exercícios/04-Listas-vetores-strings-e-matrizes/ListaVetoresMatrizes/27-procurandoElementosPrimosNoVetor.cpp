#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 27 - Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos
que são primos e suas respectivas posições no vetor.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int vet[10], div = 0;

    //Lendo valores do vetor.
    cout << "\nINFORME 10 VALORES INTEIROS:\n";
    for(int i = 0; i < 10; i++){
        cout << "Digite: ";
        cin >> vet[i];
    }

    //Analisando vetor e verificando os números primos.
    cout << "\nELEMENTOS PRIMOS:\n";
    for(int i = 0; i < 10; i++){
        for(int j = 1; j <= vet[i]; j++){
            if((vet[i] % j) == 0){
                div++;
            }
        }
        if(div <= 2){
            cout << vet[i] << " ---> Posição no vetor: " << i << "\n";
        }
        div = 0;
    }
    cout << "\n\n";
    return 0;
}