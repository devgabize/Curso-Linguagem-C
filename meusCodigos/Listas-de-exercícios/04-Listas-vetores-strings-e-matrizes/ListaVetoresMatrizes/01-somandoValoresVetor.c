#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*QUESTÃO 01 - Faça um programa que possua um vetor denominado A que armazene 6 números intei-
ros. O programa deve executar os seguintes passos:
    (a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
    (b) Armazene em uma variável inteira (simples) a soma entre os valores das posições
        A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
    (c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
    (d) Mostre na tela cada valor do vetor A, um em cada linha.*/

void main(){
    //Para utlizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int A[6] = {1 , 0, 5, -2, -5, 7}, soma = 0;

    //Realizando soma dos valores do vetor nas posições 0, 1 e 5.
    soma = A[0] + A[1] + A[5];

    //Mostrando na tela a soma.
    printf("\nSOMA = %d\n\n", soma);

    //Modificando o vetor na posição 4.
    A[3] = 100;

    //Mostrando na tela cada valor do vetor.
    for(int i = 0; i < 6; i++){
        printf("%d\n", A[i]);
    }
    printf("\n");

}