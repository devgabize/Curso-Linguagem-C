#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Crie um algoritmo que leia 3 valores para um vetor de 3 posições e depois calcule a média dos valores acessando o vetor.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float vetor[3];

    //Lendo os três valores.
    for(int i = 0; i < 3; i++){
        printf("Digite o %dº valor:", i + 1);
        scanf("%f", &vetor[i]);
    }

    //Calculando média e mostrando na tela.
    printf("\nMÉDIA = %.2f\n\n", (vetor[0] + vetor[1] + vetor[2]) / 3);
}