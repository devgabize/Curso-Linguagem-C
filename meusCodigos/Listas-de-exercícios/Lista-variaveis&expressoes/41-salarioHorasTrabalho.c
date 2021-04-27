#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*Questão 41 - Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre
o valor calculado*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float valorHora, horaTrab, salario;

    //Lendo valor da hora de trabalho e o número de horas trabalhadas.
    printf("Digite o valor da hora de trabalho R$");
    scanf("%f", &valorHora);
    printf("Informe a qtd de horas trabalhadas na mês: ");
    scanf("%f", &horaTrab);

    //Calculando salario com aumento de 10%.
    salario = (valorHora * horaTrab) * (1.0 + (10.0 / 100.0));

    //Mostrando o salário na tela.
    printf("O salário do funcionário com adicional de 10%% é R$%.2f\n", salario);
}