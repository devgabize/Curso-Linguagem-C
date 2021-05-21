#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 57 - Faça um programa que conte quantos números primos existem entre a e b, onde a e b
são números informados pelo usuário.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int a, b, div = 0, qtdPrimos = 0;

    //Lendo o número inteiro e verificando se é maior que 1.
    do{
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &a);
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &b);
        if(a <= 0 || b <= 0){
            printf("\n### ERROR: OS NÚMEROS DEVEM SER POSITIVOS E DE PREFERÊNCIA MAIORES QUE 0(ZERO)! Digite novamente! ###\n\n");
        }
    }while(a <= 0 || b <= 0);

    //Procurando números primos dentro do intervalo.
    for(int i = a; i <= b; i++){
        for(int j = 1; j <= i; j++){
            if((i % j) == 0){
                div++;
            }
        }
        if(div == 2){
            qtdPrimos++;
        }
        div = 0;
    }

    //Mostrando resultado na tela.
    printf("\nNo intervalo (%d, %d) existe(m): %d número(s) primo(s).\n\n", a, b, qtdPrimos);
}