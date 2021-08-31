#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

/*QUESTÃO 21 - Faça um programa que receba duas frases distintas e imprima de maneira invertida,
trocando as letras A por *.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    char frase1[500], frase2[500];

    //Lendo as duas frases.
    printf("Digite a primeira frase:\n");
    fgets(frase1, 500, stdin);
    printf("Digite a segunda frase:\n");
    fgets(frase2, 500, stdin);

    //Trocando as letras A por * da frase1.
    for(int i = 0; i < (strlen(frase1)); i++){
        if(frase1[i] == 'A' || frase1[i] == 'a'){
            frase1[i] = '*';
        }
    }

    //Imprimindo frase1 de maneira invertida.
    printf("\nPrimeira frase digitada:\n");
    //Imprimindo frase2 de maneira invertida.
    printf("\nPrimeira frase digitada:\n");
    for(int i = (strlen(frase1)); i >= 0; i--){
        printf("%c", frase1[i]);    
    }

    //Trocando as letras A por * da frase2.
    for(int i = 0; i < (strlen(frase2)); i++){
        if(frase2[i] == 'A' || frase2[i] == 'a'){
            frase2[i] = '*';
        }
    }

    //Imprimindo frase2 de maneira invertida.
    printf("\nSegunda frase digitada:\n");
    for(int i = (strlen(frase2)); i >= 0; i--){
        printf("%c", frase2[i]);    
    }

    printf("\n\n");

}