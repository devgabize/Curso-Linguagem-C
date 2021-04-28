#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Crie um algoritmo que leia dois valores e depois crie um menu (usando Switch Case) de 4 opções: 1-Somar, 2-Subtrair, 3-Dividir, 4-Multiplicar. Depois que o usuário escolher uma opção, mostre o resultado da operação escolhida com os dois valores lidos.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float val1, val2;
    int Op;

    //Lendo os valores.
    printf("Digite o primeiro valor: ");
    scanf("%f", &val1);
    printf("Digite o segundo valor: ");
    scanf("%f", &val2);

    //Criando Switch para opções.
    printf("\nO que você deseja fazer com esses valores?\n");
    printf("  1-Somar\n  2-Subtrair\n  3-Dividir\n  4-Multiplicar\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &Op);

    switch (Op)
    {
    case 1:
        printf("\n===== OPÇÃO SOMA =====\n  %.2f + %.2f = %.2f\n\n", val1, val2, (val1 + val2));
        break;
    case 2:
        printf("\n===== OPÇÃO SUBTRAÇÃO =====\n  %.2f - %.2f = %.2f\n\n", val1, val2, (val1 - val2));
        break;
    case 3:
        printf("\n===== OPÇÃO DIVISÃO =====\n  %.2f / %.2f = %.2f\n\n", val1, val2, (val1 / val2));
        break;
    case 4:
        printf("\n===== OPÇÃO MULTIPLICAÇÃO =====\n  %.2f x %.2f = %.2f\n\n", val1, val2, (val1 *val2));
        break;

    default:
        printf("\n### ERROR: OPÇÃO ESCOLHIDA É INVÁLIDA! REVEJA O MENU DE OPÇÕES! ###\n\n");
        break;
    }

}