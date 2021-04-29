#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>

/*Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
    • O número digitado ao quadrado
    • A raiz quadrada do número digitado*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float num;

    //Lendo número.
    printf("Digite um número: ");
    scanf("%f", &num);

    //Testando número, calculando quadrado e raiz quadrada.
    if(num > 0){
        printf("Quadrado de %.2f é igual a: %.2f\n", num, pow(num,2));
        printf("Raiz quadrada de %.2f é igual a: %.2f\n", num, sqrt(num));
    }else{
        printf("NÚMERO NEGATIVO! INFORME UM NÚMERO POSITIVO!\n");
    }
}