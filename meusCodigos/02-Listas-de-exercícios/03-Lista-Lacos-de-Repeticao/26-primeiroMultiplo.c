#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 26 - Faca um algoritmo que encontre o primeiro múltiplo de 11, 13 ou 17 após um número
dado.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int i = 1, num, end = 0;

    //Lendo o número.
    printf("Digite um número: ");
    scanf("%d", &num);

    //Encontrando o primeiro multiplo.
    while(end == 0){
        if(num % 11 == 0 || num % 13 == 0 || num % 17 == 0){
            end = 1;
            printf("\n----------\nMÚLTIPLO ENCONTRADO: %d\n----------\n\n", num);
        }
        num++;
    }
}