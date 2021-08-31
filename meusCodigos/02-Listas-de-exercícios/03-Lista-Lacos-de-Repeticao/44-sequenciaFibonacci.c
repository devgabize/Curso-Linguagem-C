#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 44 - Leia um número positivo do usuário, então, calcule e imprima a sequência Fibonacci até
o primeiro número superior ao número lido. Exemplo: se o usuário informou o número
30, a sequência a ser impressa será 0 1 1 2 3 5 8 13 21 34.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int num, i, aux = 1, prox = 0, ant;

    //Lendo o número do usuário.
    printf("Digite um número inteiro e POSITIVO: ");
    scanf("%d", &num);

    //Imprimindo sequencia Fibonacci até o número digitado.
    while(prox <= num){
        printf(" %d", prox);
        ant = aux;
        aux = prox;
        prox = ant + aux;
    }
    printf(" %d", prox);

    printf("\n\n");
}