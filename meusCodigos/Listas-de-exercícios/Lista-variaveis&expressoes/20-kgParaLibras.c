#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 20 - Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula
de conversão é: L = K / 0.45, sendo K a massa em quilogramas e L a massa em libras.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float K;

    //Lendo massa em Kg.
    printf("Informe a massa em quilogramas (Kg); ");
    scanf("%f", &K);

    //Fazendo conversão e mostrando resultado na tela.
    printf("A massa informada em libras corresponde a: %.2f lb.\n", (K/0.45));
}