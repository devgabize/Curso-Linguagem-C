#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 30 - Faça um programa que receba três números e mostre-os em ordem crescente.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float num1, num2, num3;

    //Lendo número.
    printf("Digite 3 números: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    //Comparando os números e mostrando-os em ordem crescente.
    printf("Números em ordem crescente: ");
    if(num1 < num2 && num1 < num3){
        printf(" %.2f", num1);
        if(num2 < num3){
            printf(" %.2f", num2);
            printf(" %.2f", num3);
        }else{
            printf(" %.2f", num3);
            printf(" %.2f", num2);   
        }
    }else if(num2 < num1 && num2 < num3){
        printf(" %.2f", num2);
        if(num1 < num3){
            printf(" %.2f", num1);
            printf(" %.2f", num3);
        }else{
            printf(" %.2f", num3);
            printf(" %.2f", num1);   
        }
    }else if(num3 < num1 && num3 < num1){
        printf(" %.2f", num3);
        if(num1 < num2){
            printf(" %.2f", num1);
            printf(" %.2f", num2);
        }else{
            printf(" %.2f", num2);
            printf(" %.2f", num1);   
        }
    }
    printf("\n\n");
}