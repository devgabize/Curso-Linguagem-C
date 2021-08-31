#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 31 - Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela
a seguir, verifique e mostra qual a classificação dessa pessoa.
    |               |                        PESO                            |
    |     ALTURA    |  ATÉ 60  |  ENTRE 60 E 90 (INCLUSIVE)  |  ACIMA DE 90  |
    |Menor que 1,20 |     A    |              D              |       G       |
    |De 1,20 a 1,70 |     B    |              E              |       H       |
    |Maior que 1,70 |     C    |              F              |       I       |
    ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float peso, altura;

    //Lendo peso e altura.
    printf("Informe a altura: ");
    scanf("%f", &altura);
    printf("Informe o peso: ");
    scanf("%f", &peso);

    //Verificando peso, altura e classificando a pessoa.
    if(altura < 1.20){
        if(peso <= 60.0){
            printf("\n   CLASSIFICAÇÃO: A\n\n");
        }else if(peso > 60.0 && peso <= 90.0){
            printf("\n   CLASSIFICAÇÃO: D\n\n");
        }else if(peso > 90.0){
            printf("\n   CLASSIFICAÇÃO: G\n\n");
        }
    }else if(altura >= 1.20 && altura <= 1.70){
        if(peso <= 60.0){
            printf("\n   CLASSIFICAÇÃO: B\n\n");
        }else if(peso > 60.0 && peso <= 90.0){
            printf("\n   CLASSIFICAÇÃO: E\n\n");
        }else if(peso > 90.0){
            printf("\n   CLASSIFICAÇÃO: H\n\n");
        }
    }else if(altura > 1.70){
        if(peso <= 60.0){
            printf("\n   CLASSIFICAÇÃO: C\n\n");
        }else if(peso > 60.0 && peso <= 90.0){
            printf("\n   CLASSIFICAÇÃO: F\n\n");
        }else if(peso > 90.0){
            printf("\n   CLASSIFICAÇÃO: I\n\n");
        }
    }
}