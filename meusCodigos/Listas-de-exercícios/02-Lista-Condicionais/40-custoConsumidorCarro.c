#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 40 - O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão
do distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica, de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor.
            _________________________________________________________________
            |       CUSTO DE FÁBRICA       |% DO DISTRIBUIDOR|% DOS IMPOSTOS|
            |Até R$12.000,00               |         5       |     Isento   |
            |Entre R$12.000,00 e 25.000,00 |        10       |       15     |
            |Acima de R$25.000,00          |        15       |       20     |
            ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float custoFabric, custoConsum;

    //Lendo custo de fábrica.
    printf("Informe o custo de fábrica: ");
    scanf("%f", &custoFabric);

    //Calculando o custo do consumidor final.
    if(custoFabric <= 12000.0){
        custoConsum = custoFabric + (custoFabric * (5.0 / 100.0));
    }else if(custoFabric > 12000.0 && custoFabric <= 25000.0){
        custoConsum = custoFabric + (custoFabric * (10.0 / 100.0)) + (custoFabric * (15.0 / 100.0));
    }else{
        custoConsum = custoFabric + (custoFabric * (15.0 / 100.0)) + (custoFabric * (20.0 / 100.0));
    }

    //Mostrando o custo do consumidor final.
    printf("\n====== CUSTO AO CONSUMIDOR ======\n");
    printf("---------->> R$%.2f", custoConsum);
    printf("\n=================================\n\n");
}