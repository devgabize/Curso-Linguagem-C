#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 08 - Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int vet[6];

    //Lendo os valores e guardando no vetor.
    printf("\nDIGITE VALORES INTEIROS:\n");
    for(int i = 0; i < 6; i++){
        printf("%d° valor: ", (i + 1));
        scanf("%d", &vet[i]);
    }

    //Imprimindo na ordem inversa.
    printf("\nVETOR: { ");
    for(int i = 5; i >= 0; i--){
        printf("%d ", vet[i]);
    }
    printf("}\n\n");
}