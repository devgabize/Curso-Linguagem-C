#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*Questão 06 - Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles,
assim como a diferença existente entre ambos.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num1, num2;

    //Lendo os dois números inteiros.
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("O maior número é: %d\n", num1);
        printf("A diferença entre %d e %d é: %d\n", num1, num2, (num1 - num2));
    }else{
        printf("O maior número é: %d\n", num2);
        printf("A diferença entre %d e %d é: %d\n", num1, num2, (num2 - num1));
    }
}