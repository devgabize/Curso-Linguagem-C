#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void main(){
    //Para usar acentos.
    setlocale(LC_ALL, "");

    /*Crie um algoritmo que leia 3 números inteiros de uma só vez e coloque o resultados da multiplicação entre os 3 em uma váriável própria, depois exiba essa variável.*/

    //Definindo variáveis.
    int a, b, c, result;

    //Lendo 3 números de uma só vez.
    printf("Informe 3 números para multiplicação: ");
    scanf("%d %d %d", &a, &b, &c);

    //Calculando multiplicação.
    result = a * b * c;

    //Mostrando resultado.
    printf("\nA multiplicação entre %d, %d e %d é = %d\n\n", a, b, c, result);
}