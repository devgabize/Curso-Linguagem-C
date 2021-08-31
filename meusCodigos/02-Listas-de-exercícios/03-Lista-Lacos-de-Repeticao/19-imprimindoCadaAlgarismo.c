#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 19 - Escreva um algoritmo que leia um número inteiro entre 100 e 999 e imprima na saı́da
cada um dos algarismos que compõem o número*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int num, i, verif = 1, div = 100;

    //Lendo o número inteiro entre 100 e 999. Verificando se está de acordo com a regra.
    do{
        printf("Digite um número entre 100 e 999: ");
        scanf("%d", &num);
        if(num >= 100 && num <= 999){
            verif = 0;
        }else{
            printf("\n--- ERROR: NÚMERO INVÁLIDO! DIGITE NOVAMENTE UM NÚMERO ENTRE 100 E 999! ---\n");
        }
    }while(verif == 1);

    //Imprimindo cada algarismo do número digitado.
    printf("\n==== NÚMERO DIGITADO ====\n");
    for(i = 1; i <= 3; i++){
        printf("----------- %d -----------\n", (num / div), (num % div));
        num = num % div;
        div = div / 10;
    }
    printf("=========================\n\n");
}