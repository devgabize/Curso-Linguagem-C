#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 14 - Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão
é: R = G ∗ π/180, sendo G o ângulo em graus e R em radianos e π = 3.14.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float G, R;

    //Lendo ângulo em graus.
    printf("Digite o volar o ângulo em graus: ");
    scanf("%f", &G);

    //Convertendo em Radiano.
    R = G * 3.14 /180;

    //Mostrando na tela o valor convertido.
    printf("O ângulo %.2f informado corresponde em radianos: %.2f Rad.\n", G, R);
}