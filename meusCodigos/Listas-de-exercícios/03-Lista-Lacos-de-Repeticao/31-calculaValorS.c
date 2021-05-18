#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 31 - Faça um programa que calcule e escreva o valor de S
S = 1/1 + 3/2 + 5/3 + 7/4 ... 99/55.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float S = 0.0, i, j = 1.0;

    //Calculando o valor de S.
    for(i = 1.0; i <= 99.0; i = i + 2.0){
        S += (i / j); 
        j++;  
    }

    printf("\n------------\nS = %.1f\n------------\n\n", S);
}