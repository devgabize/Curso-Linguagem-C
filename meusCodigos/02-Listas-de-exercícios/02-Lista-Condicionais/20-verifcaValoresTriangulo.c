#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*Questão 20 - Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo e, se forem, se é um triângulo escaleno, equilátero ou isóscele, considerando os seguin-
tes conceitos:
    • O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.
    • Chama-se equilátero o triângulo que tem três lados iguais.
    • Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
    • Recebe o nome de escaleno o triângulo que tem os três lados diferentes.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float A, B, C;

    //Lendo valores para os lados do triângulo.
    printf("Digite o primeiro valor para o lado do triângulo: ");
    scanf("%f", &A);
    printf("Digite o segundo valor para o lado do triângulo: ");
    scanf("%f", &B);
    printf("Digite o terceiro valor para o lado do triângulo: ");
    scanf("%f", &C);

    //Verificando se podem ser lados de um triângulo.
    if(A < (B + C) && B < (A + C) && C < (A + B)){
        if(A == B && A == C){
            printf("\nCom esses valores vocês forma um TRIÂNGULO EQUILÁTERO.\n\n");
        }else if(A == B || A == C || B == C){
            printf("\nCom esses valores vocês forma um TRIÂNGULO ISÓSCELES.\n\n");
        }else{
            printf("\nCom esses valores vocês forma um TRIÂNGULO ESCALENO.\n\n");    
        }
    }else{
        printf("\nCom esses valores você NÃO pode formar um triângulo!\n\n");
    }
}