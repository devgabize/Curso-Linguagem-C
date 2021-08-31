#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 47 - Faça um programa que apresente um menu de opções para o cálculo das seguintes
operações entre dois números:
    • adição (opção 1)
    • subtração (opção 2)
    • multiplicação (opção 3)
    • divisão (opção 4).
    • saı́da (opção 5)
O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do
resultado e a volta ao menu de opções. O programa só termina quando for escolhida a
opção de saı́da (opção 5).*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int opc;
    float num1, num2;

    //Mostrando menu.
    do{
        printf("\n----------------------------------\n");
        printf("     MENU DE OPERAÇÕES BÁSICAS         ");
        printf("\n----------------------------------\n");
        printf("( 1 ) Adição.\n( 2 ) Subtração.\n( 3 ) Multiplicação.\n( 4 ) Divisão.\n( 5 ) Saída.\n");
        printf("----------------------------------\n");
        printf("Digite sua opção: ");
        scanf("%d", &opc);

        //Realizando cálculos de acordo com a opção escolhida.
        switch(opc){
            case 1:
                printf("\n========== ADIÇÃO ==========\n");
                printf("Digite o 1º valor: ");
                scanf("%f", &num1);
                printf("Digite o 2º valor: ");
                scanf("%f", &num2);
                printf("Soma: %.2f + %.2f = %.2f", num1, num2, (num1 + num2));
                printf("\n============================\n");
                break;
            case 2:
                printf("\n========== SUBTRAÇÃO ==========\n");
                printf("Digite o 1º valor: ");
                scanf("%f", &num1);
                printf("Digite o 2º valor: ");
                scanf("%f", &num2);
                printf("Subtração: %.2f - %.2f = %.2f", num1, num2, (num1 - num2));
                printf("\n================================\n");
                break;
            case 3:
                printf("\n========== MULTIPLICAÇÃO ==========\n");
                printf("Digite o 1º valor: ");
                scanf("%f", &num1);
                printf("Digite o 2º valor: ");
                scanf("%f", &num2);
                printf("Multiplicação: %.2f x %.2f = %.2f", num1, num2, (num1 * num2));
                printf("\n====================================\n");
                break;
            case 4:
                printf("\n========== DIVISÃO ==========\n");
                printf("Digite o 1º valor: ");
                scanf("%f", &num1);
                printf("Digite o 2º valor: ");
                scanf("%f", &num2);
                printf("Soma: %.2f / %.2f = %.2f", num1, num2, (num1 / num2));
                printf("\n=============================\n");
                break;
            case 5:
                printf("\n### PROGRAMA FINALIZADO! ###\n\n");
                break;
            default:
                break;
        }
    }while(opc != 5);
    
}