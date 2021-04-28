#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 47 - Leia um número inteiro de 4 dı́gitos (de 1000 a 9999) e imprima 1 dı́gito por linha.*/
            
void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num, num2, num3, num4;

    //Lendo número inteiro de três dígitos.
    printf("Digite um número inteiro de quatro digitos (ex: 1000 a 9999): ");
    scanf("%d", &num);

    //separando dígitos dígitos.
    printf("\nNúmero Lido: %d\n", num);
    num4 = num % 10;
    num = num / 10;
    num3 = num % 10;
    num = num / 10;
    num2 = num % 10;
    num = num / 10;
    printf("Número por linha: \n  %d\n  %d\n  %d\n  %d\n\n", num, num2, num3, num4);
}