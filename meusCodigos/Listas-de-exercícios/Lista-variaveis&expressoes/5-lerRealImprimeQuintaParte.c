#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Questão 5 - Leia um número real e imprima a quinta parte deste número.

void main(){
    //Para usar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float num, quinPart;

    //Lendo valor real.
    printf("Digite um número real: ");
    scanf("%f", &num);

    //Calculando a quinta parte.
    quinPart = num / 5;

    //Mostrando resultado da quinta parte do número digitado.
    printf("\nA quinta parte do número %.0f é: %.0f\n\n", num, quinPart);
}