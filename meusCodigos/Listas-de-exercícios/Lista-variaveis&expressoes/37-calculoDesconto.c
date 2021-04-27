#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 37 - Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12%*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float valorProd, Descont;

    //Lendo valor do produto.
    printf("Informe o valor do produto R$");
    scanf("%f", &valorProd);

    //Calculando desconto.
    Descont = valorProd * 0.12;

    //Mostrando na tela o valor do produto com o desconto.
    printf("\n-------------------------------\n");
    printf("|Valor do produto:  R$%.2f |\n|Valor do desconto: R$%.2f |\n|Total:             R$%.2f |", valorProd, Descont, (valorProd - Descont));
    printf("\n-------------------------------\n\n");
}