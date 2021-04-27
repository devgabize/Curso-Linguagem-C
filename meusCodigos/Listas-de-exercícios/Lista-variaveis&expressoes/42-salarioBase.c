#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 42 - Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso,
ele paga 7% de imposto sobre o salário-base.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float salBase, gratif, imposto, salRecebe;

    //Lendo o salário base.
    printf("Informe o salário base R$");
    scanf("%f", &salBase);

    //Calculando a gratificação, o imposto e o salário a receber.
    gratif = salBase * (5.0 / 100.0);
    imposto = (salBase + gratif) * (7.0 / 100.0);
    salRecebe = (salBase + gratif) - imposto; 

    //Mostrando o salário a receber após a gratificação e o desconto do imposto.
    printf("Gratificação de 5%% sobre o salario-base: R$%.2f\nImposto descontado: R$%.2f\nSalario a receber: R$%.2f\n", gratif, imposto, salRecebe);
}