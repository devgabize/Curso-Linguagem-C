#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 23 - Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se
for divisı́vel por 400 ou se for divisı́vel por 4 e não for divisı́vel por 100. Por exemplo:
1988, 1992, 1996*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int ano;

    //Lendo o ano.
    printf("Digite o ano: ");
    scanf("%d", &ano);

    //Testando se é ano bissexto e mostrando na tela.
    if((ano % 400) == 0 || (ano % 4) == 0 && (ano % 100) != 0){
        printf("\nO ano %d é BISSEXTO!\n\n", ano);
    }else{
        printf("\nO ano %d NÃO É BISSEXTO!\n\n", ano);
    }
}