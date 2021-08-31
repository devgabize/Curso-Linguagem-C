#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*QUESTÃO 23 - Faca um algoritmo que leia um número positivo e imprima seus divisores.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int num, i = 1, teste = 1;

    //Lendo o número positivo.
    printf("Digite um número positivo: ");
    scanf("%d", &num);

    //Imprimindo os divisores do número.
    printf("\nDIVISORES DE %d\n", num);
    for(i = 1; i <= num; i++){
        if(num % i == 0){
            printf("   %d", i);
        }
    }
    printf("\n\n");
}