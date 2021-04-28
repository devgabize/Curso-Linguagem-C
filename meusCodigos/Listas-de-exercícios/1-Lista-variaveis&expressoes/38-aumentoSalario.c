#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*Questão 38 - Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float salario, salAument;

    //Lendo Salário.
    printf("Informe o salário R$");
    scanf("%f", &salario);

    //Calculando aumento.
    salAument = salario * (1.0+(25.0/100.0));

    //Mostrando o salário com aumento na tela.
    printf("Com o aumento de 25%% o funcionário receberá R$%.2f\n", salAument);
}