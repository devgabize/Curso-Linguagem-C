#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 21 - Faça um programa que receba dois números. Calcule e mostre:
    • a soma dos números pares desse intervalo de números, incluindo os números digi-
    tados;
    • a multiplicação dos números ı́mpares desse intervalo, incluindo os digitados;*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int i, num, maior, menor, somaPar = 0, multiplicaImpar = 1;

    //Lendo os dois números e verificado qual o maior e o menor deles.
    printf("\nDigite 2 números para o intervalo!");
    printf("\nDigite o 1º valor: ");
    scanf("%d", &num);
    maior = num;
    menor = num;
    printf("Digite o 2º valor: ");
    scanf("%d", &num);
    if(num > maior){
        maior = num;
    }else{
        menor = num;
    }

    //Encontrando os pares e os impares e realizando a soma e multiplicação.
    for(i = menor; i <= maior; i++){
        if(i % 2 == 0){
            somaPar += i;
        }else{
            multiplicaImpar *= i;
        }
    }

    //Mostrando resultado.
    printf("\n-----------------------------\n");
    printf("SOMA DOS NÚMEROS PARES: %d", somaPar);
    printf("\nMULTIPLICAÇÃO DOS NÚMEROS IMPARES: %d\n", multiplicaImpar);
    printf("-----------------------------\n\n");

}