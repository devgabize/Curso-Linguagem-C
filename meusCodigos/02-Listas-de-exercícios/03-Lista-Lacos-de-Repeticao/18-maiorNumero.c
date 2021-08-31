#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 18 - Escreva um algoritmo que leia certa quantidade de números e imprima o maior deles e
quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve ser
fornecida pelo usuário.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int qtd, i, qtdMaior;
    float num, maior;

    //Lendo a quantidade de números que irão ser digitados.
    printf("\nInforme quantos números irá digitar: ");
    scanf("%d", &qtd);

    //Lendo o primeiro valor e atribuindo a maior para iniciar as comparações.
    printf("Digite o 1º valor: ");
    scanf("%f", &num);
    maior = num;

    //Como esse primeiro valor foi o maior lido, qtdMaior recebe um, pois já leu 1 vez o maior.
    qtdMaior = 1;

    //Lendo os números de acordo com a quantidade informada e verificando o maior digitado.
    for(i = 2; i <= qtd; i++){
        printf("Digite o %dº valor: ", i);
        scanf("%f", &num);   
        if(num > maior){
            maior = num;
            qtdMaior++;
        } 
    }

    //Mostrando o maior valor lido e quantas vezes o maior número digitado foi lido.
    printf("\n===============================\n");
    printf("MAIOR VALOR LIDO: %.1f\nNº DE VEZES QUE O MAIOR NÚMERO FOI LIDO: %d", maior, qtdMaior);
    printf("\n===============================\n\n");
}