#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*QUESTÃO 54 - Faça um programa que receba um número inteiro maior do que 1, e verifique se o número
fornecido é primo ou não.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int num, div = 0;

    //Lendo o número inteiro e verificando se é maior que 1.
    do{
        printf("Digite um número inteiro maior que 1: ");
        scanf("%d", &num);
        if(num <= 1){
            printf("\n### ERROR: NÚMERO DEVE SER MAIOR QUE 1! Digite novamente! ###\n\n");
        }
    }while(num <= 1);

    //Verificando se é número primo.
    for(int i = 1; i <= num; i++){
        if((num % i) == 0){
            div++;
        }
    }

    if(div == 2){
        printf("\nO número %d é primo!\n\n", num);
    }else{
        printf("\nO número %d não é primo!\n\n", num);    
    }    
}