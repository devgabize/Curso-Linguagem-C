#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 22 - Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula
de conversão é: M = 0, 91 ∗ J, sendo J o comprimento em jardas e M o comprimento
em metros.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float M, J;

    //lendo o comprimento em jardas.
    printf("Informe o comprimento em jardas: ");
    scanf("%f", &J);

    //Fazendo a conversão.
    M = 0.91 * J;

    //Mostrando o resultado da conversão na tela.
    printf("O comprimento informada em metros corresponde a: %.2f m.\n", M);
}