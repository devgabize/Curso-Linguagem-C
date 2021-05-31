#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*QUESTÃO 02 - Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int vet[6];

    //Lendo os valores e guardando no vetor.
    printf("\nDIGITE VALORES INTEIROS:");
    for(int i = 0; i < 6; i++){
        printf("\n%dº valor: ", (i + 1));
        scanf("%d", &vet[i]);
    }

    //Mostrando os valores lidos na tela.
    printf("\nNÚMEROS LIDOS: { ");
    for(int i = 0; i < 6; i++){
        printf("%d ", vet[i]);
    }
    printf("}\n\n");
}