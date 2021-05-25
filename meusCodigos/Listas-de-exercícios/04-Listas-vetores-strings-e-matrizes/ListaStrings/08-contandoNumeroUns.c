#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*QUESTÃO 08 - Faça um programa que conte o número de 1’s que aparecem em um string. Exemplo: 
“0011001” -> 3*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    char string[250];
    int i = 0, qtd = 0;

    //Lendo string.
    printf("Digite uma sequência de números e ao final aperte enter: ");
    scanf("%s", &string);

    //Contando os uns da string.
    while(string[i] != '\0'){
        if(string[i] == '1'){
            qtd++;
        }
        i++;
    }

    //Mostrando resultado da contagem.
    printf("\nTotal de 1's encontrados: %d\n\n", qtd);
}