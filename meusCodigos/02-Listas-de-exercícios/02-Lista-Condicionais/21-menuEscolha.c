#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 21 - Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação esco-
lhida. Escreva uma mensagem de erro se a opção for inválida.
Escolha a opção:
1- Soma de 2 números.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).
Opção */

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int opc;
    float num1, num2;

    //Menu de opções.
    printf("\nEscolha a opção:\n1- Soma de 2 números.\n2- Diferença entre 2 números (maior pelo menor).\n3- Produto entre 2 números.\n4- Divisão entre 2 números (o denominador não pode ser zero).\n");
    
    //Lendo opção e testando se o número digitado é válido.
    printf("Opção: ");
    scanf("%d", &opc);
    if(opc >= 1 && opc <= 4){
        switch(opc){
            case 1:
                printf("\nDigite os dois valores para soma: ");
                scanf("%f %f", &num1, &num2);
                printf("\nRESULTADO: %.2f + %.2f = %.2f\n\n", num1, num2, (num1 + num2));
                break;
            case 2:
                printf("\nDigite os dois valores para subtração (O primeiro valor dever ser maior): ");
                scanf("%f %f", &num1, &num2);
                if(num1 < num2){
                    printf("\nO PRIMEIRO VALOR É MENOR, RESULTADO SERÁ NEGATIVO! REVEJA O MENU!\n\n");
                }else{
                    printf("\nRESULTADO: %.2f - %.2f = %.2f\n\n", num1, num2, (num1 - num2));
                }
                break;
            case 3:
                printf("\nDigite os dois valores para multiplicação: ");
                scanf("%f %f", &num1, &num2);
                printf("\nRESULTADO: %.2f x %.2f = %.2f\n\n", num1, num2, (num1 * num2));
                break;
            case 4:                
                printf("\nDigite os dois valores para divisão (o segundo NÃO deve ser 0(zero)): ");
                scanf("%f %f", &num1, &num2);
                if(num2 == 0){
                    printf("\nO SEGUNDO VALOR É IGUAL A 0 (ZERO)! REVEJA O MENU!\n\n");
                }else{
                    printf("\nRESULTADO: %.2f / %.2f = %.2f\n\n", num1, num2, (num1 / num2));
                }
                break;
        }
    }else{
        printf("\n  ERROR: OPÇÃO ESCOLHIDA É INVÁLIDA! REVEJA O MENU DE OPÇÕES!\n\n");
    }    
}