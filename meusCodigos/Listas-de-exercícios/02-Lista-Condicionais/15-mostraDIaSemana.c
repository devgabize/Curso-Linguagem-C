#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 15 - Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
da semana correspondente a este numero. Isto é, domingo se 1, segunda-feira se 2, e
assim por diante.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num;

    //Lendo número inteiro.
    printf("Digite um número inteiro (entre 1 e 7): ");
    scanf("%d", &num);

    //criando switch.
    switch(num){
        case 1:
            printf("\nO número %d corresponde a DOMINGO!\n\n", num);
            break;
        case 2:
            printf("\nO número %d corresponde a SEGUNDA-FEIRA!\n\n", num);
            break;
        case 3:
            printf("\nO número %d corresponde a TERÇA-FEIRA!\n\n", num);
            break;
        case 4:
            printf("\nO número %d corresponde a QUARTA-FEIRA!\n\n", num);
            break;
        case 5:
            printf("\nO número %d corresponde a QUINTA-FEIRA!\n\n", num);
            break;
        case 6:
            printf("\nO número %d corresponde a SEXTA-FEIRA!\n\n", num);
            break;
        case 7:
            printf("\nO número %d corresponde a SÁBADO!\n\n", num);
            break;
        default:
            printf("\n### NÚMERO DIGITADO É INVÁLIDO! ESCOLHA ENTRE 1 E 7 ###\n\n");
            break;
    }
}