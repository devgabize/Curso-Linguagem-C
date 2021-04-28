#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 6 - Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
A fórmula de conversão é: F = C ∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
e C a temperatura em Celsius.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float C, F;

    //Lendo temperatura em graus celsius.
    printf("Informe a temperatura em graus celsius (°C): ");
    scanf("%f", &C);

    //Convertendo a temperatura em fahrenheit.
    F = C * (9.0 / 5.0) + 32.0;

    //Mostrando na tela temperatura convertida.
    printf("A temperatura %.2f°C em Fahenheit é igual a %.2fF\n", C, F);
}