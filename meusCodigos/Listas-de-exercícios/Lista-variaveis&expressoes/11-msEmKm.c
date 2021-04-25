#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*Questão 11 - Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilômetros por hora). A fórmula de conversão é: K = M ∗ 3.6, sendo K a velocidade
em km/h e M em m/s.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Denfinindo variáveis.
    float K, M;

    //Lendo velocidade em m/s.
    printf("Informe a velocidade em m/s: ");
    scanf("%f", &M);

    //Calculando conversão de m/s em Km/h.
    K = M * 3.6;

    //Mostrando conversão na tela.
    printf("A velocidade %.2f m/s em Km/h é igual a: %.2f Km/h.\n", M, K);
}