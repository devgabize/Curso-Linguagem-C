#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 46 - Faça um programa que leia um número inteiro positivo de três dı́gitos (de 100 a 999).
Gere outro número formado pelos dı́gitos invertidos do número lido. Exemplo:
                                NúmeroLido = 123
                                NúmeroGerado = 321.*/
            
void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num, aux;

    //Lendo número inteiro de três dígitos.
    printf("Digite um número inteiro de três digitos (ex: 100 a 999): ");
    scanf("%d", &num);

    //Invertendo dígitos.
    printf("\nNúmero Lido: %d\n", num);
    aux = num % 10;
    printf("Número Gerado: %d", aux);
    num = num / 10;
    aux = num % 10;
    printf("%d", aux);
    num = num / 10;
    printf("%d\n", num);
}