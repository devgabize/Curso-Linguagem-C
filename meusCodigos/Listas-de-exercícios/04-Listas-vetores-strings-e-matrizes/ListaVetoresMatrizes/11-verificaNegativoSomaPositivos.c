#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 11 - Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a
quantidade de números negativos e a soma dos números positivos desse vetor.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float vet[10], somaPositivos = 0;
    int qtdNegativos = 0;

    //Lendo os 10 valores reais.
    printf("\nINFORME 10 VALORES:\n");
    for(int i = 0; i < 10; i++){
        printf("DIgite o %dº valor: ", (i +1));
        scanf("%f", &vet[i]);
    }

    //Verificando os valores digitados analisando se são negativos e somando os positivos.
    for(int i = 0; i < 10; i++){
        if(vet[i] >= 0){
            somaPositivos += vet[i];
        }else{
            qtdNegativos++;
        }
    }

    //Mostrando resultado na tela.
    printf("\nDos valores digitados %d são negativos!\n", qtdNegativos);
    printf("A soma dos valores positivos digitados é: %.2f\n\n", somaPositivos);
}