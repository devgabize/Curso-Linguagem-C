#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 5 - Faça um programa que peça ao usuário para digitar 10 valores e some-os.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float num, soma = 0;

    //Lendo valores e realizando a soma.
    printf("\n===== SOMA DE VALORES =====\n");
    for(int i = 1; i <= 10; i++){
        printf("Digite o %dº valor: ", i);
        scanf("%f", &num);
        soma += num;
    }

    //Mostrando resultado.
    printf("\n===== RESULTADO ==========\n|    SOMA =  %.2f    |", soma);
    printf("\n==========================\n\n");

}