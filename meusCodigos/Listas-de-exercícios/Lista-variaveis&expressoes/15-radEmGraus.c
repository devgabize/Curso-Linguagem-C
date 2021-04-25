#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 15 - Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão
é: G = R ∗ 180/π, sendo G o ângulo em graus e R em radianos e π = 3.14.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float G, R;

    //Lendo ângulo em radianos.
    printf("Digite o volar o ângulo em radianos: ");
    scanf("%f", &R);

    //Convertendo em Radiano.
    G = R * 180 / 3.14;

    //Mostrando na tela o valor convertido.
    printf("O ângulo %.2f informado corresponde em graus: %.2f graus.\n", R, G);
}