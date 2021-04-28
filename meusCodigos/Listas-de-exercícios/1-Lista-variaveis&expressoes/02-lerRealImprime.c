#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Questão 2 - Faça um programa que leia um número real e o imprima.
 
void main(){
    //Para usar acentos.
    setlocale(LC_ALL, "");

    //Definindo variável.
    float a;

    //Lendo valor.
    printf("Digite um valor real: ");
    scanf("%f", &a);

    //Imprimindo valor digitado.
    printf("\nO valor digitado foi: %f\n\n", a);
}