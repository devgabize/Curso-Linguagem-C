#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 8 - Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
fórmula de conversão é: C = K − 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float K, C;

    //Lendo temperatura em Kelvin.
    printf("Informe a temperatura em Kelvin (K): ");
    scanf("%f", &K);

    //Convertendo temperatura em graus Celsius.
    C = K - 273.15;

    //Mostrando conversão na tela.
    printf("A temperatura %.2fK convertida em graus Celsius é igual a %.2fºC.\n", K, C);
}