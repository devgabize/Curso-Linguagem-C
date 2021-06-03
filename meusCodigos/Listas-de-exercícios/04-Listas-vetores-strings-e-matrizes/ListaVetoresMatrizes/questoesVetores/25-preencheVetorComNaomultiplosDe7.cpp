#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 25 - Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros natu-
rais que não são múltiplos de 7 ou que terminam com 7.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int vet[100], j = 0, i = 0;

    //Preenchendo vetor com números que não são múltiplos de 7.
    while(j < 100){
        if((i % 7) != 0){
            vet[j] = i;
            j++;
        }
        i++;
    }

    //Mostrando vetor preenchido.
    cout << "\nVETOR: { ";
    for(i = 0; i < 100; i++){
        cout << vet[i] << " ";
    }
    cout << "}\n\n";

    return 0;
}