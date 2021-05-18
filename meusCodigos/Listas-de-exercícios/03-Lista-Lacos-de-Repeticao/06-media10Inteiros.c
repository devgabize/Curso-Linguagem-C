#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 6 - Faça um programa que leia 10 inteiros e imprima sua média.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int i, soma, num;
    float media;

    //Lendo os 10 inteiro e realizando a soma.
    printf("\n========= CALCULANDO MÉDIA =========\n");
    for(i = 1; i <= 10; i++){
        printf("Digite o %dº valor: ", i);
        scanf("%d", &num);

        soma += num;
    }

    //Calculando média e mostrando na tela.
    media = soma / 10.0;
    printf("\n========= RESULTADO ==========\n|        MÉDIA = %.1f        |", media);
    printf("\n==============================\n\n");
}