#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*Questão 10 - Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s
(metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em
km/h e M em m/s.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Denfinindo variáveis.
    float K, M;

    //Lendo velocidade em km/h.
    printf("Informe a velocidade em Km/h: ");
    scanf("%f", &K);

    //Calculando conversão de Km/h em M/s.
    M = K / 3.6;

    //Mostrando conversão na tela.
    printf("A velocidade %.2f Km/h em metros por segundo é igual a: %.2f m/s.\n", K, M);
}