#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 29 - Escreva um programa para calcular o valor da série, para 5 termos.
S = 0 + 1/2! + 2/4! + 3/6! + ...*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int j, fat = 1;
    float i, S = 0;

    //Calculando valor da série de 5 termos.
    for(i = 1.0; i <= 5.0; i++){
        for(j = (2 * i); j > 0; j--){
            fat *= j;
        }
        S += (i / fat);
        fat = 1;
    }

    //Mostrando valor da série.
    printf("\n---------\nVALOR SÉRIE 5 TERMOS = %.2f\n---------\n\n", S);
}