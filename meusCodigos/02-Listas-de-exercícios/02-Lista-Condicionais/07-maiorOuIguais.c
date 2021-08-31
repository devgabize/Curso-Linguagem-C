#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 07 - Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois
números forem iguais, imprima a mensagem Números iguais.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float num1, num2;

    //Lendo os dois números.
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    //Testando qual o maior ou se são iguais e mostrando na tela.
    if(num1 > num2){
        printf("%.2f é o maior número digitado!\n", num1);
    }else if(num1 < num2){
        printf("%.2f é o maior número digitado!\n", num2);
    }else{
        printf("\nOS NÚMEROS DIGITADOS SÃO IGUAIS!\n");
    }
}