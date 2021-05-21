#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 53 - Escreva um programa que leia um número inteiro positivo n e em seguida imprima n
linhas do chamado Triangulo de Floyd. Para n = 6, temos:
                                            1
                                            2 3
                                            4 5 6
                                            7 8 9 10
                                            11 12 13 14 15
                                            16 17 18 19 20 21*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int num, i = 1, linha = 1, cont = 1;

    //Lendo o número inteiro para imprimir linhas.
    printf("\nDigite um número inteiro para o triângulo de Floyd: ");
    scanf("%d", &num);

    //Imprimindo triângulo de Floyd.
    while(linha <= num){
        while(cont <= linha){
            printf(" %d", i);
            i++;
            cont++;
        }
        printf("\n");
        linha++;
        cont = 1;
    }

}