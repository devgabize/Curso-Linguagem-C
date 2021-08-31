#include<stdlib.h>
#include<stdio.h>
#define TAM 3

void main(){
    //Definindo o vetor.
    int vetor[TAM], cont;

    //Passando valores para o vetor.
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //Imprimindo vetor em um laço de repetição.Adicionando 1 para cada posição.
    for(cont = 0; cont < TAM; cont++){
        vetor[cont] = vetor[cont] + 1;
    }

    //Exibir os valores do vetor.
    printf("\nPosição 0: %d", vetor[0]);
    printf("\nPosição 1: %d", vetor[1]);
    printf("\nPosição 2: %d\n", vetor[2]);

    //Imprimindo vetor em um laço de repetição.
    for(cont = 0; cont < TAM; cont++){
        printf("\nPosição %d: %d", cont, vetor[cont]);
    }
    printf("\n");

    //Lendo 3 valores para o vetor.
    for(cont = 0; cont < TAM; cont++){
        scanf("%d", &vetor[cont]);
    }

    //Imprimindo vetor em um laço de repetição.
    for(cont = 0; cont < TAM; cont++){
        printf("\nPosição %d: %d", cont, vetor[cont]);
    }
    printf("\n");
}