#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 1 - Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, conside-
rando números maiores que 0.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int i = 1, num = 1;

    //Determinando e mostrando os 5 primeiros múltiplos de 3 maiores que 0.
    printf("\n==== MÚLTIPLOS DE 3 MAIORES QUE 0 ====\n|     ");
    while(i <= 5){
        if(num % 3 == 0){
            printf("   %d", num);
            i++;
        }
        num++;
    }
    printf("         |\n======================================\n\n");
}