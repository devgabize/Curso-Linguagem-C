#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 9 - Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
fórmula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a
temperatura em Kelvin.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float K, C;

    //Lendo temperatura em Celsius.
    printf("Informe a temperatura em Celsius (°C): ");
    scanf("%f", &C);

    //Convertendo temperatura em graus Celsius.
    K = C + 273.15;

    //Mostrando conversão na tela.
    printf("A temperatura %.2fºC convertida em Kelvin é igual a %.2fK.\n", C, K);
}