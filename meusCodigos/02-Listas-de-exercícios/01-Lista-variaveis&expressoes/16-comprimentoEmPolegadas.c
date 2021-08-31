#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 16 - Leia um valor de comprimento em polegadas e apresente-o convertido em centı́metros.
A fórmula de conversão é: C = P ∗ 2.54, sendo C o comprimento em centı́metros e P o
comprimento em polegadas.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float C, P;

    //Lendo comprimento em polegadas.
    printf("Informe o valor do comprimento em polegadas: ");
    scanf("%f", &P);

    //Convertendo polegadas em centímetros.
    C = P *2.54;

    //Mostrando conversão na tela.
    printf("O valor do comprimento em centímetros é: %.2f cm.\n", C);
}