#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*Questão 09 - Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a
prestação for maior que 20% do salário imprima: Empréstimo não concedido, caso contrário imprima: Empréstimo concedido.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definido variáveis.
    float salario, prest;

    //Lendo salário do trabalhador e valor da prestação.
    printf("Digite o salário do trabalhador(a): ");
    scanf("%f", &salario);
    printf("Digite o valor da prestação: ");
    scanf("%f", &prest);

    if(prest > (salario * 0.20)){
        printf("\n     EMPRÉSTIMO NÃO CONCEDIDO.\n\n");
    }else{
        printf("\n     EMPRÉSTIMO CONCEDIDO.\n\n");
    }
}