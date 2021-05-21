#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*QUESTÃO 48 - Faça um programa que some os termos de valor par da sequência de Fibonacci, cujos
valores não ultrapassem quatro milhões.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int aux = 1, numAnt, numProx = 0.0, somaPar = 0.0;

    //Procurando números pares na sequência de Fibonacci.
    do{
        if(numProx % 2 == 0){
            somaPar += numProx;
        }
        numAnt = aux;
        aux = numProx;
        numProx = numAnt + aux;        
    }while(numProx < 4000000);
 
    printf("\nSoma dos termos pares da sequência: %d\n\n", somaPar);

}