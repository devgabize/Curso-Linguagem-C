#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 40 - Elabore um programa que faça leitura de vários números inteiros, até que se digite um
número negativo. O programa tem que retornar o maior e o menor número lido.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int num, maior, menor;

    //Lendo os númeross inteiros.
    printf("\nDigite números inteiros e para finalizar digite um número negativo!\n");
    printf("Digite um número: ");
    scanf("%d", &num);
    maior = num;
    menor = num;

    do{
        printf("Digite um número: ");
        scanf("%d", &num);
        if(num > maior){
            maior = num;
        }else if(num < menor && num >= 0){
            menor = num;
        }
    }while(num >= 0);

    //Mostrando na tela o maior e o menor número digitado.
    printf("\nMAIOR NÚMERO: %d\nMENOR NÚMERO: %d\n\n", maior, menor);
}