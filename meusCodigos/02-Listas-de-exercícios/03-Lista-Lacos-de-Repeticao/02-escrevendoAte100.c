#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 2 - Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira
vez deve usar a estrutura de repetição for, a segunda while, e a terceira do while.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int i;

    //Escrevendo de 1 até 100 com for.
    printf("\n======= FOR =======\n");
    for(i = 1; i <= 100; i++){
        printf(" %d", i);
    }

    //Escrevendo de 1 até 100 com While.
    printf("\n\n======= While =======\n");
    i = 1;
    while(i <= 100){
        printf(" %d", i);
        i++;
    }

    //Escrevendo de 1 até 100 com Do While.
    printf("\n\n======= Do While =======\n");
    i = 1;
    do{
        printf(" %d", i);
        i++;
    }while(i <= 100);

    printf("\n");
}