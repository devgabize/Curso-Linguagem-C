#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/*QUESTÃO 10 - Faça um programa que receba uma palavra e a imprima de trás-para-frente. */

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    char palavra[20], aux;
    int i;

    //Lendo palavra.
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);
    
    //Analisando string e imprimindo invertido a ordem das letras.
    printf("\nPalavra digitada: %s\nPalavra de trás-para-frente: ", palavra);
    for(i = strlen(palavra); i >= 0; i--){
        aux = palavra[i];
        printf("%c", aux);
    }
    printf("\n\n");
}