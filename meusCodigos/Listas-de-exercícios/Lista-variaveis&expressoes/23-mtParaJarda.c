#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 23 - Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula
de conversão é: J = M / 0.91, sendo J o comprimento em jardas e M o comprimento em metros.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float M, J;

    //lendo o comprimento em metros.
    printf("Informe o comprimento em metros (m): ");
    scanf("%f", &M);

    //Fazendo a conversão.
    J = M / 0.91;

    //Mostrando o resultado da conversão na tela.
    printf("O comprimento informada em jardas corresponde a: %.2f jardas.\n", J);
}