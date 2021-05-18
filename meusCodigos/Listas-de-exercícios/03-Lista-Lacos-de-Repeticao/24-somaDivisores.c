#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 24 - Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número, com exceção dele próprio. Ex: a soma dos divisores do número 66 é
1 + 2 + 3 + 6 + 11 + 22 + 33 = 78*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int num, soma = 0;

    //Lendo número inteiro.
    printf("Digite um número: ");
    scanf("%d", &num);

    //Encontrando divisores e realizando a soma.
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            soma += i;
        }
    }

    //Mostrando resultado da soma.
    printf("\n------------\nSOMA DO DIVISORES DE %d = %d\n------------\n\n", num, soma);
}