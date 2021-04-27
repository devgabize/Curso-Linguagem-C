#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 40 - Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite
o número de dias trabalhados pelo encanador e imprima a quantia lı́quida que deverá ser
paga, sabendo-se que são descontados 8% para imposto de renda.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float diasTrab, descImpost, liquido;

    //Lendo dias trabalhados.
    printf("Informe a qtd de dias trabalhados: ");
    scanf("%f", &diasTrab);

    //Calculando desconto do imposto e o salário líquido.
    descImpost = (diasTrab * 30.00) * (8.0/100.0);
    liquido = (diasTrab * 30.00) - descImpost;

    //Mostrando na tela o desconto e o salário liquido.
    printf("\nSalário bruto: R$%.2f\nDesconto Imposto de Renda: R$%.2f\nSalário líquido: R$%.2f\n\n", (diasTrab * 30.00), descImpost, liquido);
}