#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 36 - Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser
paga ao vendedor. Para calcular a comissão, considere a tabela abaixo: 
    _____________________________________________________________________________________
    |                     VENDA MENSAL                      |          COMISSÃO         |
    |Maior ou igual a R$100.000,00                          | R$700,00 + 16% das vendas | 
    |Menor que R$100.000,00 e maior ou igual a R$80.000,00  | R$650,00 + 14% das vendas |
    |Menor que R$80.000,00 e maior ou igual a R$60.000,00   | R$600,00 + 14% das vendas |
    |Menor que R$60.000,00 e maior ou igual a R$40.000,00   | R$550,00 + 14% das vendas |
    |Menor que R$40.000,00 e maior ou igual a R$20.000,00   | R$500,00 + 14% das vendas |
    |Menor que R$20.000,00                                  | R$400,00 + 14% das vendas |
    ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨*/
void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float venda, comissao;

    //Lendo valor da venda mensal.
    printf("Informe o valor da venda: ");
    scanf("%f", &venda);

    //Analisando venda, calculando comissão e mostrando na tela.
    if(venda >= 100000.0){
        comissao = 700.0 + (venda * (16.0/100.0));
        printf("\n====== COMISSÃO A SER PAGA AO VENDEDOR ======\n");
        printf("----------> R$%.2f\n", comissao);
        printf("=============================================\n");
    }else if(venda < 100000.0 && venda >= 80000.0){
        comissao = 650.0 + (venda * (14.0/100.0));
        printf("\n====== COMISSÃO A SER PAGA AO VENDEDOR ======\n");
        printf("----------> R$%.2f\n", comissao);
        printf("=============================================\n");
    }else if(venda < 80000.0 && venda >= 60000.0){
        comissao = 600.0 + (venda * (14.0/100.0));
        printf("\n====== COMISSÃO A SER PAGA AO VENDEDOR ======\n");
        printf("----------> R$%.2f\n", comissao);
        printf("=============================================\n");
    }else if(venda < 60000.0 && venda >= 40000.0){
        comissao = 550.0 + (venda * (14.0/100.0));
        printf("\n====== COMISSÃO A SER PAGA AO VENDEDOR ======\n");
        printf("------------- >>> R$%.2f\n", comissao);
        printf("=============================================\n");
    }else if(venda < 40000.0 && venda >= 20000.0){
        comissao = 500.0 + (venda * (14.0/100.0));
        printf("\n====== COMISSÃO A SER PAGA AO VENDEDOR ======\n");
        printf("----------> R$%.2f\n", comissao);
        printf("=============================================\n");
    }else{
        comissao = 400.0 + (venda * (14.0/100.0));
        printf("\n====== COMISSÃO A SER PAGA AO VENDEDOR ======\n");
        printf("----------> R$%.2f\n", comissao);
        printf("=============================================\n");    
    }
}