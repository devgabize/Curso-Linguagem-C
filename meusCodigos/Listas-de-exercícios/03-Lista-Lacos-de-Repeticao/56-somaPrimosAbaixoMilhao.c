#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*QUESTÃO 55 - Escreva um programa que leia um inteiro não negativo n e imprima a soma dos n primei-
ros números primos.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int n = 2000000, soma = 0, div = 0, i, primo = 1;    

    //Verificando se é número primo e fazendo soma.
    for(i = 1; i <= n; i++){
        //Procurando os divisores.
        for(int j = 1; j <= i; j++){
            if((i % j) == 0){
                div++;
            }
        }
        //Realizando a soma caso o número representado por i seja primo.
        if(div == 2){
            soma += i;
        }
        //Zerando div para o próximo teste.
        div = 0;
    } 

    //Mostrando resultado.
    printf("\nSoma dos números primos abaixo de %d: %d!\n\n", n, soma);  
}