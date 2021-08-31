#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

/*QUESTÃO 01 - Faça um programa que então leia uma string e a imprima.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    char palavra[250];

    //Lendo string.
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    //Eliminando espaços vazios.
    palavra[strlen(palavra)] = '\0';
    
    //Imprimindo string.
    printf("Palavra digitada: %s\n", palavra);
}