#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 43 - Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
• o total a pagar com desconto de 10%;
• o valor de cada parcela, no parcelamento de 3× sem juros;
• a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
• a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float valorTotal, totalDesc, parcela, comiVista, comiPrazo;

    //Lendo valor total.
    printf("Informe o valor total da compra R$");
    scanf("%f", &valorTotal);

    //Calculando desconto, parcelamento e comissões.
    totalDesc = valorTotal * (1.0 - (10.0 / 100.0));
    parcela = valorTotal / 3;
    comiVista = totalDesc * (5.0 / 100.0);
    comiPrazo = valorTotal * (5.0 / 100.0);

    //Mostrando resultados na tela;
    printf("\nTotal com desconto de 10%%: R$%.2f\nValor de cada parcela em 3x sem juros: R$%.2f\nComissão na venda à vista: R$%.2f\nComissão na venda à prazo: R$%.2f\n\n",totalDesc, parcela, comiVista, comiPrazo);   
}