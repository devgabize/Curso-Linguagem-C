#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 10 - Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int i =1, num = 1, soma = 0;

    //Calculando a soma dos 50 números pares.
    printf("\n======= SOMA 50 NÚMEROS PARES =======\n");
    while(i <= 50){
        if(num % 2 == 0){
            soma += num;
            i++;
        }
        num++;
    }
    printf("-------------------------------------\n");
    printf("            SOMA = %d", soma);
    printf("\n-------------------------------------\n\n");
}