#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 16 - Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês
correspondente a este numero. Isto é, janeiro se 1, fevereiro se 2, e assim por diante.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num;

    //Lendo número inteiro.
    printf("Digite um número inteiro entre 1 e 12: ");
    scanf("%d", &num);

    //Crriando Switch.
    switch(num){
        case 1:
            printf("\nO número %d corresponde ao mês JANEIRO!\n\n", num);
            break;
        case 2:
            printf("\nO número %d corresponde ao mês FEVEREIRO!\n\n", num);
            break;
        case 3:
            printf("\nO número %d corresponde ao mês MARÇO!\n\n", num);
            break;
        case 4:
            printf("\nO número %d corresponde ao mês ABRIL!\n\n", num);
            break;
        case 5:
            printf("\nO número %d corresponde ao mês MAIO!\n\n", num);
            break;
        case 6:
            printf("\nO número %d corresponde ao mês JUNHO!\n\n", num);
            break;
        case 7:
            printf("\nO número %d corresponde ao mês JULHO!\n\n", num);
            break;
        case 8:
            printf("\nO número %d corresponde ao mês AGOSTO!\n\n", num);
            break;
        case 9:
            printf("\nO número %d corresponde ao mês SETEMBRO!\n\n", num);
            break;
        case 10:
            printf("\nO número %d corresponde ao mês OUTUBRO!\n\n", num);
            break;
        case 11:
            printf("\nO número %d corresponde ao mês NOVEMBRO!\n\n", num);
            break;
        case 12:
            printf("\nO número %d corresponde ao mês DEZEMBRO!\n\n", num);
            break;
        default:
            printf("\n### OPÇÃO DIGITADA INVÁLIDA! REVEJA O INTERVALO! ###\n\n");
            break;
    }
}