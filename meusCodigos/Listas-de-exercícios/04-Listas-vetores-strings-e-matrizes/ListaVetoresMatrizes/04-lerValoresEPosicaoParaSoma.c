#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*QUESTÃO 04 - Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois va-
lores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa
deverá escrever a soma dos valores encontrados nas respectivas posições X e Y .*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float vet[8];
    int X, Y;

    //Lendo os valores do vetor e os valores das posições para soma.
    printf("\nDIGITE VALORES:\n");
    for(int i = 0; i < 8; i++){
        printf("\n%dº valor: ", (i + 1));
        scanf("%f", &vet[i]);
    }
    printf("\nAGORA DIGITE DOIS VALORES DAS POSIÇÕES DO VETOR CRIADO:\n");
    scanf("%d %d", &X, &Y);

    //Mostrando soma dos valores das respectivas posições.
    printf("\nSOMA DOS VALORES DAS POSIÇÕES VET[%d] = %.2f E VET[%d] = %.2f É:\n", X, vet[X], Y, vet[Y]);
    printf("  %.2f + %.2f = %.2f\n\n", vet[X], vet[Y], (vet[X] + vet[Y]));
}