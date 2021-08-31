#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*Questão 45 - Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
ASCII para resolver o problema.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    char G;

    //Mostrando a letra em minúsculo usando código decimal da tabela ASCII.
    printf("Em minúsculo 'G' = %c\n", 103);
}