#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

/*QUESTÃO 02 - Crie um programa que calcula o comprimento de uma string (não use a função strlen).*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    char palavra[250];
    int tamanho = 0, i = 0;

    //Lendo a string.
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    //Analisando string.
    while(palavra[i] != '\0'){
        tamanho++;
        i++;
    }

    //Mostrando o comprimento da string.
    printf("\nO comprimento da string é: %d\n", tamanho);

}