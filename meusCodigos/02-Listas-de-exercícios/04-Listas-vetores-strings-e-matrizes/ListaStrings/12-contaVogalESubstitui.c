#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/*QUESTÃO 12 - Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui
essa palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais
da palavra dada por esse caractere.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    char palavra[30];
    int qtdVogal = 0, i = 0;

    //Lendo a palavra.
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    //Analisando a palavra, contando vogais e substituindo pelo caractere 'x'.
    while(palavra[i] != '\0'){
        if(palavra[i] == 'a' || palavra[i] == 'A' || palavra[i] == 'e' || palavra[i] == 'E' || palavra[i] == 'i' || palavra[i] == 'I' || palavra[i] == 'o' || palavra[i] == 'O' || palavra[i] == 'u' || palavra[i] == 'U'){
            qtdVogal++;
            palavra[i] = 'x';
        }
        i++;
    }

    //Imprimindo a string modificada.
    printf("\nQtd de vogais da plavra: %d\n", qtdVogal);
    printf("Palavra modificada: %s\n\n", palavra);
}