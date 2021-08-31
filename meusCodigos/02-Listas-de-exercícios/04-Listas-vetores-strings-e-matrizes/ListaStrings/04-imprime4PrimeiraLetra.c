#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

/*QUESTÃO 04 - faça um programa que leia um nome e imprima as 4 primeiras letras do nome.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    char nome[30];

    //Lendo nome.
    printf("Digite seu nome: ");
    scanf("%s", &nome);

    //Imprimindo as 4 primeiras letras do nome digitado.
    for(int i = 0; i < 4; i++){
        printf("%c", nome[i]);
    }
    printf("\n\n");
}