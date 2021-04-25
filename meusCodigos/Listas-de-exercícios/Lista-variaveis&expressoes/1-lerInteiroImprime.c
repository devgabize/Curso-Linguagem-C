#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Questão 1 - Faça um programa que leia um número inteiro e o imprima.
 
void main(){
    //Para usar acentos.
    setlocale(LC_ALL, "");

    //Definindo variável.
    int a;

    //Lendo valor.
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);

    //Imprimindo valor digitado.
    printf("\nO valor digitado foi: %d\n\n", a);
}