#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 21 - Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula
de conversão é: K = L ∗ 0.45, sendo K a massa em quilogramas e L a massa em libras.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float L, K;

    //Lendo massa em libras.
    printf("Informe a massa em libras (lb): ");
    scanf("%f", &L);

    //Fazendo a conversão.
    K = L * 0.45;

    //Mostrando resultado da conversão na tela.
    printf("A massa informada em quilogramas corresponde a: %.2f Kg.\n", K);
}