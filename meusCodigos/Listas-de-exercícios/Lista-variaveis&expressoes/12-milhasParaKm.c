#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 12 - Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de
conversão é: K = 1, 61 ∗ M , sendo K a distância em quilômetros e M em milhas.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float K, M;

    //Lendo distância em milhas.
    printf("Informe a distância em milhas: ");
    scanf("%f", &M);

    //Convertendo a distância em quilômetros.
    K = 1.61 * M;

    //Mostrando resultado da conversão na tela.
    printf("A distância %.2f milhas em quilômetro é igual a: %.2f Km.\n", M, K);
}