#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 01 - Faça um programa que receba dois números e mostre qual deles é o maior.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num1, num2;

    //Lendo os números.
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    //Testando o maior.
    if(num1 > num2){
        printf("O número %d é o maior valor digitado!\n", num1);
    }else{
        printf("O número %d é o maior valor digitado!\n", num2);
    }
}