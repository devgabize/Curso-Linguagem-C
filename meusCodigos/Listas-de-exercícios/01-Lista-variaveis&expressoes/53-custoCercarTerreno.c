#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 53 - Faça um programa para ler as dimensões de um terreno (comprimento c e largura l),
bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno
com tela.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float c, l, p, custo, metroTela;

    //Lendo comprimento e largura do terreno.
    printf("Informe o comprimento do terreno em metros(m): ");
    scanf("%f", &c);
    printf("Informe a largura do terreno em metros(m): ");
    scanf("%f", &l);
    printf("Informe o preço do metro da tela: R$");
    scanf("%f", &p);

    //Calculando o custo para cercar o terreno.
    metroTela = (c * 2) + (l * 2);
    custo = metroTela * p;

    //Mostrando o resultado na tela.
    printf("Para cercar o terreno você precisará de %.1f metros de tela, gastando um total de R$%.2f em tela.\n\n", metroTela, custo);
}