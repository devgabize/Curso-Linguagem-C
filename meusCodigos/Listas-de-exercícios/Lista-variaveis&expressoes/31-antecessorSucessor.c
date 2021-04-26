#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*Questão 31 - Leia um número inteiro e imprima o seu antecessor e o seu sucessor.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num;

    //Lendo número inteiro.
    printf("Informe um número inteiro: ");
    scanf("%d", &num);

    //Mostrando o antecessor e sucessor na tela.
    printf("Número digitado: %d\nAntecessor: %d\nSucessor: %d\n", num, (num-1), (num+1));
}