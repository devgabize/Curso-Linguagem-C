#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 39 - Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela
que considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor salário terão um aumento proporcionalmente maior do que os funcionários com um salário maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário. Faça um programa que leia:
    • o valor do salário atual do funcionário;
    • o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).
Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o valor do salário final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum aumento.
        ______________________________________________________________
        | SALÁRIO ATUAL  |REAJUSTE(%) | TEMPO DE SERVIÇO |   BÔNUS   |
        |Até 500,00      |     25%    |  Abaixo de 1 ano | Sem bônus |
        |Até 1000,00     |     20%    |   De 1 a 3 anos  |   100,00  |
        |Até 1500,00     |     15%    |   De 4 a 6 anos  |   200,00  |
        |Até 2000,00     |     10%    |   De 7 a 10 anos |   300,00  |
        |Acima de 2000,00|Sem reajuste|  Mais de 10 anos |   500,00  |
        ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int tempoServico;
    float salarioAtual, salarioReajustado;

    //Lendo o salário atual e o tempo de serviço.
    printf("Informe o salário atual: R$");
    scanf("%f", &salarioAtual);
    printf("Informe o tempo de serviço (ano): ");
    scanf("%d", &tempoServico);

    //Analisando salário e calculando reajuste.
    if(salarioAtual <= 500.00){
        salarioReajustado = salarioAtual * (1 + (25.0/100.0));
    }else if(salarioAtual > 500.00 && salarioAtual <= 1000.00){
        salarioReajustado = salarioAtual * (1 + (20.0/100.0));   
    }else if(salarioAtual > 1000.00 && salarioAtual <= 1500.00){
        salarioReajustado = salarioAtual * (1 + (15.0/100.0));   
    }else if(salarioAtual > 1500.00 && salarioAtual <= 2000.00){
        salarioReajustado = salarioAtual * (1 + (10.0/100.0));   
    }else{
        salarioReajustado = salarioAtual;
        printf("\n----------------------------------------------\n");
        printf("Devido ao salário, não tem direito a reajuste!");
        printf("\n----------------------------------------------\n");
    }

    //Analisando o tempo de serviço e adicionando o bônus ao salário reajustado.
    if(tempoServico < 1){
        printf("\n-----------------------------------------------------\n");
        printf("Devido ao tempo de serviço, não tem direito ao bônus!");
        printf("\n-----------------------------------------------------\n");    
    }else if(tempoServico >= 1 && tempoServico <= 3){
        salarioReajustado = salarioReajustado + 100.00;   
    }else if(tempoServico >= 4 && tempoServico <= 6){
        salarioReajustado = salarioReajustado + 200.00;   
    }else if(tempoServico >= 7 && tempoServico <= 10){
        salarioReajustado = salarioReajustado + 300.00;   
    }else{
        salarioReajustado = salarioReajustado + 500.00;     
    }

    //Mostrando o salário reajustado.
    printf("\n================ SALÁRIO REAJUSTADO =================\n");
    printf("----------------- >> R$ %.2f", salarioReajustado);
    printf("\n=====================================================\n");
}