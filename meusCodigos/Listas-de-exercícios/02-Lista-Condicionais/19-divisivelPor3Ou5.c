#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 19 - Faça um programa para verificar se um determinado número inteiro e divisı́vel por 3 ou
5, mas não simultaneamente pelos dois.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num;

    //Lendo número inteiro.
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    //Testando se o número é divisível por 3 ou 5.
    if(num % 3 == 0 && num % 5 != 0){
        printf("\n O número %d é divisível por 3.\n\n", num);
    }else if(num % 5 == 0 && num % 3 != 0){
        printf("\n O número %d é divisível por 5.\n\n", num);
    }else{
        printf("\n\n*** OPS NÚMERO ERRADO, INFORME OUTRO! :) ***\n\n");
    }
}