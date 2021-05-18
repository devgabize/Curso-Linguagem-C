#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

/*QUESTÃO 32 - Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como
saı́da o número de cada dado e a relação entre eles (>,<,=) de cada lançamento.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Para alimnetar o rand de forma aleatória.
    srand((unsigned)time(NULL));

    //Definindo variáveis.
    int d1 = 1 + (rand() % 6), d2 = 1 + (rand() % 6), i, n;

    //Lendo o número de vezes que os dados erão lançados.
    printf("Digite o número de vezes que deseja lançar os dados: ");
    scanf("%d", &n);

    //Lançando os dados e mostrando a relação entre eles.
    for(i = 1; i <= n; i++){
        if(d1 > d2){
            printf("Dado 1: %d > Dado 2: %d\n", d1, d2);
        }else if(d1 < d2){
            printf("Dado 1: %d < Dado 2: %d\n", d1, d2);
        }else{
            printf("Dado 1: %d = Dado 2: %d\n", d1, d2);    
        }
        d1 = 1 + (rand() % 6);
        d2 = 1 + (rand() % 6);
    }
}