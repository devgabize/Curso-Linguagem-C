#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*Questão 32 - Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de
seu dobro.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num;

    //Lendo número inteiro.
    printf("Informe um número inteiro: ");
    scanf("%d", &num);

    //Mostrando a soma sucessor do triplo de num como antecessor do sobro de num na tela.
    printf("Número digitado: %d\nSoma do sucessor do triplo de %d como antecessor do dobro de %d é igual a: %d\n", num, num, num, (((num*3)+1)+((num*2)-1)));
}