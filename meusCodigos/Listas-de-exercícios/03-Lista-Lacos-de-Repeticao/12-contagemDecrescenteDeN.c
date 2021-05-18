#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 12 - Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem decrescente.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int N;

    //Lendo o inteiro N;
    printf("Digite um número para finalizar a contagem: ");
    scanf("%d", &N);

    //Contando até N.
    printf("\n======= CONTAGEM DECRESCENTE DE %d =======\n", N);
    for(int i = N; i >= 0; i--){
        printf("  %d", i);
    }
    printf("\n==========================================\n\n");
}