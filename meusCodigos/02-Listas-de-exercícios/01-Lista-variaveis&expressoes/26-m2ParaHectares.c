#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 26 - Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares.
A fórmula de conversão é: H = M ∗ 0.0001, sendo M a área em metros quadrados e H
a área em hectares.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float H, M;

    //Lendo área em m2.
    printf("Informe a área em metros quadrados (m2): ");
    scanf("%f", &M);

    //Fazendo Conversão.
    H = M * 0.0001;

    //Mostrando resultado da conversão na tela.
    printf("A área informada em hectáres corresponde a: %.2f ha.\n", H);
}