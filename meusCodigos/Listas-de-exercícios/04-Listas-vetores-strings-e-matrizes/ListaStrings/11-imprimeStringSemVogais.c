#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>

/*QUESTÃO 11 - Faça um programa que receba do usuário uma string. O programa imprime a string sem
suas vogais.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    char string[30];

    //Lendo string.
    printf("Digite uma palavra: ");
    scanf("%s", &string);

    //Analisando string digitada e imprimindo sem as vogais.
    printf("\nPalavra sem vogais: ");
    for(int i = 0; i < strlen(string); i++){
        if(string[i] != 'a' && string[i] != 'A' && string[i] != 'e' && string[i] != 'E' && string[i] != 'i' && string[i] != 'I' && string[i] != 'o' && string[i] != 'O' && string[i] != 'u' && string[i] != 'U'){
            printf("%c", string[i]);
        }
    }
    printf("\n\n");
}