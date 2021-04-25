#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 13 - Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de
conversão é: M = K / 1,61, sendo K a distância em quilômetros e M em milhas.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float K, M;

    //Lendo distância em quilômetros.
    printf("Informe a distância em Km: ");
    scanf("%f", &K);

    //Convertendo a distância em milhas.
    M = K / 1.61;

    //Mostrando resultado da conversão na tela.
    printf("A distância %.2f Km em milhas é igual a: %.2f milhas.\n", K, M);
}