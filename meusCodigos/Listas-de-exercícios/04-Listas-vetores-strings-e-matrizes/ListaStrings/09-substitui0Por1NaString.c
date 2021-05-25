#include<stdio.h>
#include<stdio.h>
#include<locale.h>

/*QUESTÃO 09 - Escreva um programa que substitui as ocorrências de um caractere ‘0’ em uma string por
outro caractere ‘1’.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    char String[30];
    int i = 0;

    //Lendo string.
    printf("Digite uma sequência númerica, ao final aperte enter: ");
    scanf("%s", &String);

    //Analisando string.
    while(String[i] != '\0'){
        if(String[i] == '0'){
            String[i] = '1';
        }
        i++;
    }

    //Mostrando nova string.
    printf("\nString após correção: %s\n\n", String);
}