#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Questão 3 - Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

void main(){
    //Para usar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int a, b, c, soma;

    //Lendo os valores de uma só vez.
    printf("Digite 3 valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    //Calculando a soma deles.
    soma = a + b + c;

    //Imprimindo a soma dos valores.
    printf("\nA soma dos valores digitados foi: %d\n\n", soma);
}