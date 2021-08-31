#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 7 - Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
média.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Deinindo variáveis.
    int i = 1, soma = 0, num;

    //Lendo os 10 inteiros positivos e realizando a soma.
    printf("\n========= CALCULANDO MÉDIA INTEIROS POSITIVOS =========\n");
    while(i <= 10){
        printf("Digite o %dº valor: ", i);
        scanf("%d", &num);  
        if(num > 0){
            soma += num;
            i++;
        }else{
            printf("\n### ERROR: NÚMERO DIGITADO É NEGATIVO! DIGITE NOVAMENTE! ###\n\n");
        }  
    }

    //Calculando a média e mostrando na tela.
    printf("\n======== RESULTADO ========\n|      MÉDIA = %.1f      |", (soma / 10.0));
    printf("\n===========================\n\n");
}