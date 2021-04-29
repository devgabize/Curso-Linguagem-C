#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 05 - Faça um programa que receba um número inteiro e verifique se este número é par ou
ı́mpar.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num;

    //Lendo número.
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    //Testando número digitando e mostrando se é par ou impar.
    if(num % 2 == 0){
        printf("\n==== %d É PAR ====\n\n", num);
    }else{
        printf("\n==== %d É IMPAR ====\n\n", num);
    }
}