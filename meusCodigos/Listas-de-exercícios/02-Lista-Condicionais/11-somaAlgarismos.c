#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 11 - Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem “Número inválido”.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num, soma = 0;

    //Lendo número inteiro.
    printf("Digite um número inteiro maior que zero: ");
    scanf("%d", &num);

    //Calculando soma algarismos e mostrando na tela o resultado da soma.
    if(num > 0){
        soma = soma + (num % 10);
        num = num / 10;
        soma = soma + (num % 10);
        num = num / 10;
        soma = soma + num;

        printf("\nSoma dos algarismos é: %d.\n\n", soma);

    }else{
        printf("\nNúmero inválido!\n\n");
    }
}