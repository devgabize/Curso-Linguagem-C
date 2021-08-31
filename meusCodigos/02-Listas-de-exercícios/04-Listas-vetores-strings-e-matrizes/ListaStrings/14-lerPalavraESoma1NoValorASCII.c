#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

/*QUESTÃO 14 - Faça um programa que leia uma palavra (máximo de 50 letras) e some 1 no valor ASCII
de cada caractere da palavra. Imprima a string resultante.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    char palavra[50];
    int num, i = 0;

    //Lendo palavra.
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    //Analisando cada caractere da palavra.
    while(palavra[i] != '\0'){
        num = palavra[i];
        num += 1;
        palavra[i] = num ;
        i++;
    }

    //Imprimindo string resultante.
    printf("\nNova palavra: %s\n\n", palavra);   
}