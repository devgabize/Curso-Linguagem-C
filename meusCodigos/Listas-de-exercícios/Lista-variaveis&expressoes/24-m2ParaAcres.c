#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*Questão 24 - Leia um valor de área em metros quadrados m 2 e apresente-o convertido em acres. A
fórmula de conversão é: A = M ∗ 0.000247, sendo M a área em metros quadrados e A
a área em acres.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float A, M;

    //Lendo área em metros quadrados m2.
    printf("Informe a área em metros quadrados (m2): ");
    scanf("%f", &M);

    //Fazendo conversão.
    A = M * 0.000247;

    //Mostrando resultado da conversão na tela.
    printf("A área informada em acres corresponde a: %.2f acre.\n", A);
}