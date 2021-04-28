#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*Questão 25 - Leia um valor de área em acres e apresente-o convertido em metros quadrados m2 . A
fórmula de conversão é: M = A ∗ 4048.58, sendo M a área em metros quadrados e A a
área em acres.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float A, M;

    //Lendo área em acres.
    printf("Informe a área em acres: ");
    scanf("%f", &A);

    //Fazendo conversão.
    M = A * 4048.58;

    //Mostrando resultado da conversão na tela.
    printf("A área informada em metros quadrados corresponde a: %.2f m2.\n", M);
}