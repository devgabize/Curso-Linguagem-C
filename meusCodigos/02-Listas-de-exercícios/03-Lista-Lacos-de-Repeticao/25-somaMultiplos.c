#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 25 - Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos
de 3 ou 5.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int i, soma = 0;

    //Encontrando os múltiplos de 3 ou 5 e realizando a soma.
    for(i = 1; i < 1000; i++){
        if(i % 3 == 0 || i % 5 == 0){
            soma += i;
        }
    }

    //Mostrando o resultado da soma.
    printf("\n\n-------------\nSOMA MÚLTIPLOS DE 3 OU 5 = %d\n-------------\n\n", soma);
}