#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*Questão 18 - Leia um valor de volume em metros cúbicos m^3 e apresente-o convertido em litros. A
fórmula de conversão é: L = 1000 ∗ M , sendo L o volume em litros e M o volume em
metros cúbicos.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float L, M;

    //Lendo o volume em m3.
    printf("Informe o volume em metros cúbicos (m3): ");
    scanf("%f", &M);

    //Fazendo conversão.
    L = 1000 * M;

    // Mostrando resultado da conversão na tela.
    printf("O volume informa em litros corresponde a: %.1f L.\n", L);
}