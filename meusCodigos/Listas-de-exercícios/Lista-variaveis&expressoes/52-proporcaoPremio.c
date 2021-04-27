#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 52 - Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido pro-
porcionalmente ao valor que cada deu para a realização da aposta. Faça um programa
que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um
ganharia do prêmio com base no valor investido.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float invest1, invest2, invest3, premio, prop1, prop2, prop3, ganha1, ganha2, ganha3;

    //Lendo quanto cada jogador investiu e o premio da aposta.
    printf("Quanto o apostador 1 investiu? ");
    scanf("%f", &invest1);
    printf("Quanto o apostador 2 investiu? ");
    scanf("%f", &invest2);
    printf("Quanto o apostador 3 investiu? ");
    scanf("%f", &invest3);
    printf("Qual o valor do prêmio? ");
    scanf("%f", &premio);

    //Calculando proporção da aposta e repartindo o premio de acordo com a proporcao.
    prop1 = (invest1 / (invest1 + invest2 + invest3)) * 100.0;
    prop2 = (invest2 / (invest1 + invest2 + invest3)) * 100.0;
    prop3 = (invest3 / (invest1 + invest2 + invest3)) * 100.0;
    ganha1 = premio * (prop1 / 100.0);
    ganha2 = premio * (prop2 / 100.0);
    ganha3 = premio * (prop3 / 100.0);

    //Mostrando resultado na tela.
    printf("=== RESUMO APOSTA ===\n");
    printf("Total da aposta: R$%.2f\nApostador 1 investiu R$%.2f que corresponde a %.2f%%\nApostador 2 investiu R$%.2f que corresponde a %.2f%%\nApostador 3 investiu R$%.2f que corresponde a %.2f%%\n", (invest1 + invest2 + invest3), invest1, prop1, invest2, prop2, invest3, prop3);
    printf("\n=== DIVISÃO DO PRÊMIO ===\n");
    printf("PRÊMIO: R$%.2f\nApostador 1 receberá R$%.2f que corresponde a %.2f%%\nApostador 2 receberá R$%.2f que corresponde a %.2f%%\nApostador 3 recebrá R$%.2f que corresponde a %.2f%%\n\n", premio, ganha1, prop1, ganha2, prop2, ganha3, prop3);
}