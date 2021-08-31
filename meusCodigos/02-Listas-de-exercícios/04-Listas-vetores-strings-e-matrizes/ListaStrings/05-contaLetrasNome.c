#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

/*QUESTÃO 05 - Digite um nome, calcule e retorne quantas letras tem esse nome.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    char palavra[250];
    int qtdLetras = 0, i = 0;

    //Lendo a string.
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    //Analisando string.
    while(palavra[i] != '\0'){
        qtdLetras++;
        i++;
    }

    //Mostrando o comprimento da string.
    printf("\nO nome digitado tem: %d letras\n\n", qtdLetras);

}