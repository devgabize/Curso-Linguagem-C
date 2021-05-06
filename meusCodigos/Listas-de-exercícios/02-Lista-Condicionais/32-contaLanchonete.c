#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 32 - Escrever um programa que leia o código do produto escolhido do cardápio de uma lan-
chonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um pedido. O cardápio da lanchonete segue o padrão abaixo:
                        |ESPECIFICAÇÃO    |  CÓDIGO  |  PREÇO  |
                        |Cachorro Quente  |    100   |   1,20  |
                        |Bauru Simples    |    101   |   1,30  |
                        |Bauru com Ovo    |    102   |   1,50  |
                        |Hamburguer       |    103   |   1,20  |
                        |Cheeseburguer    |    104   |   1,70  |
                        |Suco             |    105   |   2,20  |
                        |Refrigerante     |    106   |   1,00  |
                        ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨*/
void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int cod, qtd;

    //Lendo código do lanche e quantidade.
    printf("Digite o código: ");
    scanf("%d", &cod);
    printf("Digite a quantidade: ");
    scanf("%d", &qtd);

    //Verificando o código e calculando o total a pagar.
    if(cod == 100){
        printf("\nTotal a pagar por %d Cachorro Quente: R$%.2f\n\n", qtd, (qtd * 1.20));
    }else if(cod == 101){
        printf("\nTotal a pagar por %d Bauru Simples: R$%.2f\n\n", qtd, (qtd * 1.30));
    }else if(cod == 102){
        printf("\nTotal a pagar por %d Bauru com Ovo: R$%.2f\n\n", qtd, (qtd * 1.50));
    }else if(cod == 103){
        printf("\nTotal a pagar por %d Hamburguer: R$%.2f\n\n", qtd, (qtd * 1.20));
    }else if(cod == 104){
        printf("\nTotal a pagar por %d Cheeseburguer: R$%.2f\n\n", qtd, (qtd * 1.70));
    }else if(cod == 105){
        printf("\nTotal a pagar por %d Suco: R$%.2f\n\n", qtd, (qtd * 2.20));
    }else if(cod == 106){
        printf("\nTotal a pagar por %d Refrigerante: R$%.2f\n\n", qtd, (qtd * 1.00));
    }
}