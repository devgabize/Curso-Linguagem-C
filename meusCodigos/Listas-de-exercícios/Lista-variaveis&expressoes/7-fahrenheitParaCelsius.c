#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*Questão 7 - Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A fórmula de conversão é: C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius
e F a temperatura em Fahrenheit.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float F, C;

    //Lendo temperatura em Fahrenheit.
    printf("Informe a temperatura em Fahrenheit (F): ");
    scanf("%f", &F);

    //Transformando Fahrenheit em graus Celsius.
    C = 5.0 * (F - 32.0) / 9.0;

    //Mostrando na tela o resultado da conversão.
    printf("A temperatura %.2fF em graus Celsius é igual a %.2fºC.\n", F, C);
}