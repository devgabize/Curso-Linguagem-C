#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 27 - Leia um valor de área em hectares e apresente-o convertido em metros quadrados m 2 .
A fórmula de conversão é: M = H ∗ 10000, sendo M a área em metros quadrados e H
a área em hectares.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float H, M;

    //Lendo área em ha.
    printf("Informe a área em hectares (ha): ");
    scanf("%f", &H);

    //Fazendo Conversão.
    M = H * 10000;

    //Mostrando resultado da conversão na tela.
    printf("A área informada em metros quadrados corresponde a: %.2f m2.\n", M);
}