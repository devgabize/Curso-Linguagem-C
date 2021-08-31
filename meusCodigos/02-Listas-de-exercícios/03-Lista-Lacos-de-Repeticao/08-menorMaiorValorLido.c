#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 8 - Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor
lido.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int i;
    float num, maior, menor;

    //Lendo os 10 valores e verificando o maior e menor número degitado.
    printf("\n======== Maior e Menor ========\n");
    printf("Digite o 1º valor: ");
    scanf("%f", &num);
    maior = num;
    menor = num;

    for(i = 2; i <= 10; i++){
        printf("Digite o %dº valor: ", i);
        scanf("%f", &num);
        if(num > maior){
             maior = num;
        }else if(num < menor){
            menor = num; 
        }              
    }

    //Mostrando o maior e o menor valor lido.
    printf("\nMENOR VALOR DIGITADO: %.1f\n", menor);
    printf("MAIOR VALOR DIGITADO: %.1f\n\n", maior);
}