#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 49 - O funcionário chamado Carlos tem um colega chamado João que recebe um salário que
equivale a um terço do seu salário. Carlos gosta de fazer aplicações na caderneta de poupança e vai aplicar seu salário integralmente nela, pois está rendendo 2% ao mês. João aplicará seu salário integralmente no fundo de renda fixa, que está rendendo 5% ao mês. Construa um programa que deverá calcular e mostrar a quantidade de meses necessários para que o valor pertencente a João iguale ou ultrapasse o valor pertencente a Carlos. Teste com outros valores para as taxas.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float salario1, salario2, rend1, rend2, qtdMes = 1;

    //Lendo os dois salários.
    printf("Digite o primeiro salário: ");
    scanf("%f", &salario1);

    //Analisando os salários e os investimentos.
    salario2 = salario1 / 3.0;
    rend1 = (salario1 * (1.0 + (2.0 / 100)));
    rend2 = (salario2 * (1.0 + (5.0 / 100)));

    while(rend2 <= rend1){
        rend1 += (rend1 * (2.0 / 100));
        rend2 += (rend2 * (5.0 / 100));
        qtdMes++;
    }

    //Mostrando resultado na tela.
    printf("\nQtd de meses necessários: %.0f\n\n", qtdMes);
}