#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 9 - Faça um programa que leia um número inteiro N e depois imprima os N primeiros
números naturais ı́mpares.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int N, i = 1, num = 1;

    //Lendo o inteiro N;
    printf("Digite um número inteiro: ");
    scanf("%d", &N);

    //Imprimindo os primeiros N números inteiros naturais.
    printf("\n======= %d Número(s) ímpar(es) =======\n", N);
    while(i <= N){
        if(num % 2 != 0){
            printf("  %d", num);
            i++;
        }
        num++;
    }
    printf("\n======================================\n\n");
}