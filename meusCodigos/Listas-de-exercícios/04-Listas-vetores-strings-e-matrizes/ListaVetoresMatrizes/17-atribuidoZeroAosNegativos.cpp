#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 17 - Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuı́rem
valores negativos.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float vet[10];

    //Lendo os 10 valores do vetor.
    cout << "\nINFORME 10 VALORES:\n";
    for(int i = 0; i < 10; i++){
        cout << (i + 1) << "° valor: ";
        cin >> vet[i];
    }

    //Analisando o vetor e substituindo os números negativos por 0(zero).
    for(int i = 0; i < 10; i++){
        if(vet[i] < 0){
            vet[i] = 0;
        }
    }

    //Mostrando vetor atualizado na tela.
    cout << "\nVETOR ATUALIZADO: { ";
    for(int i = 0; i < 10; i++){
        cout << vet[i] << " ";
    }
    cout << "}\n\n";
}