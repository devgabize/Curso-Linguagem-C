#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*Questão 17 - Leia um valor de comprimento em centı́metros e apresente-o convertido em polegadas.
A fórmula de conversão é: P = C / 2.54, sendo C o comprimento em centı́metros e P o
comprimento em polegadas.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float C, P;

    //Lendo comprimentos em centímetros.
    printf("Informe o comprimento em centímetros (cm): ");
    scanf("%f", &C);

    //Fazendo a conversão.
    P = C / 2.54;

    //Mostrando conversão.
    printf("A medida informada em polegas corresponde a: %.2f pol.\n", P);
}