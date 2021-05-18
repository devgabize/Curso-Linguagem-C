#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 15 - Faça um programa que leia um número inteiro positivo ı́mpar N e imprima todos os
números ı́mpares de 1 até N em ordem crescente.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int N, i = 1, verif = 1;

    //Lendo N e verificando se é ímpar.
    do{
        printf("Digite um número INTEIRO, POSITIVO E ÍMPAR para limite da contagem: ");
        scanf("%d", &N);
        if(N % 2 != 0 && N > 0){
            verif = 0;
        }else{
            printf("\n#####################################\n");
            printf("ERROR: NÚMERO INVÁLIDO! DEVE SER:\n   1-INTEIRO;\n   2-POSITIVO;\n   3-ÍMPAR.");
            printf("\n--- TENTE NOVAMENTE! ---\n#####################################\n\n");
        }
    }while(verif == 1);

    //Imprimindo todos os ímpares de 1 até N.
    printf("\n======= NÚMEROS ÍMPARES DE 1 ATÉ %d =======\n", N);
    while(i <= N){
        if(i % 2 != 0){
            printf(" %d", i);
        }
        i++;
    }
    printf("\n=========================================\n\n");
}