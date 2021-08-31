#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*Questão 18 - Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int opc;
    float num1, num2;

    //Mostrando menu de 4 opções.
    printf("\n======= MENU =======\n|  1-ADIÇÃO        |\n|  2-SUBTRAÇÃO     |\n|  3-MULTIPLICAÇÃO |\n|  4-DIVISÃO       |\n");
    printf("====================\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opc);

    //Testando se a opção digitada está correta.
    if(opc >= 1 && opc <=4){
        //Lendo dois valores numéricos.
        printf("\nDigite um valor numérico: ");
        scanf("%f", &num1);
        printf("Digite mais um valor numérico: ");
        scanf("%f", &num2);

        //Criando Switch e mostrando resultados.
        switch(opc){
            case 1:
                printf("\n-------------------------\n          SOMA\n-------------------------\n");
                printf("  %.2f + %.2f = %.2f\n-------------------------\n\n", num1, num2, (num1 + num2));
            break;
        case 2:
            printf("\n----------------------\n      SUBTRAÇÃO\n----------------------\n");
            printf("  %.2f - %.2f = %.2f\n----------------------\n\n", num1, num2, (num1 - num2));
            break;
        case 3:
            printf("\n-----------------------\n     MULTIPLICAÇÃO\n-----------------------\n");
            printf("  %.2f x %.2f = %.2f\n-----------------------\n\n", num1, num2, (num1 * num2));
            break;
        case 4:
            printf("\n----------------------\n       DIVISÃO\n----------------------\n");
            printf("  %.2f / %.2f = %.2f\n----------------------\n\n", num1, num2, (num1 / num2));
            break;
        }
    }else{
        printf("\n### OPÇÃO INVÁLIDA! REVEJA O MENU! ###\n\n");
    }
}