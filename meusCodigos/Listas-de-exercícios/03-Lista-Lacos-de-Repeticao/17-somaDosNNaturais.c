#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*QUESTÃO 17 - Faça um programa que leia um número inteiro positivo n e calcule a soma dos n primeiros
números naturais.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int n, soma = 0, verifi = 1;

    //Lendo n e verificando se é positivo.
    do{
        printf("Digite um número inteiro e positivo para realizar a soma: ");
        scanf("%d", &n);

        if(n > 0){
            verifi = 0;
        }else{
            printf("\n--- ERROR: NÚMERO INVÁLIDO! DEVE SER INTEIRO E POSITIVO! TENTE NOVAMENTE! ---\n");
        }
    }while(verifi == 1);

    //Realizando as soma dos números naturais até n.
    for(int i = 1; i <= n; i++){
        soma += i;
    }

    //Mostrando resultado da soma.
    printf("\n======= RESULTADO =======\n");
    printf("------- SOMA = %d -------", soma);
    printf("\n=========================\n\n");
}