#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 4 - Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000
em 1000, imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil).*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num;

    //Incrementando variável e imprimindo na tela.
    printf("\n======== ATÉ 100000 ========\n");
    for(num = 0; num <= 100000; num += 1000){
        printf("   %d", num);
    }

    //Pulando linha para organização.
    printf("\n\n");
}