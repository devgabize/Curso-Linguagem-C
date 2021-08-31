#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*QUESTÃO 51 - Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996
recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do ano anterior. Faça programa que determine o salário atual do funcionário.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float salario = 2000.0, taxaAumento, aumento;
    int ano = 1996;
    
    taxaAumento = (1.5 / 100.0);
    //Encontrando o salário atual.
    while(ano <= 1999){
        if(ano >= 1997){
            taxaAumento = taxaAumento * 2;
        }
        aumento = salario * taxaAumento;
        printf("\nAno: %d\n", ano);
        printf("Taxa aumento: %.2f\n", taxaAumento);
        salario = salario + aumento;
        printf("Salário: %.2f\n", salario);
        ano++;
    }
    
    //Mostando salário atual na tela.
    printf("\nEm 2021 o salário equivale a: %.2f\n\n", salario);
}