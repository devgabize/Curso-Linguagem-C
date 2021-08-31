#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 50 - Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de
sua idade e do ano atual.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int anoNasc, anoAtual, idade;

    //Lendo a idade e o ano atual.
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Informe o ano atual: ");
    scanf("%d", &anoAtual);

    //Mostrando o ano de nascimento.
    printf("\nO ano que você nasceu foi: %d\n\n", (anoAtual-idade));
}