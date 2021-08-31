#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/*Questão 33 - Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.*/

void main(){
    //Para utilizar acento.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float lado;

    //Lendo lado do quadrado.
    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%f", &lado);

    //Calculando área do quadrado e mostrando resultado.
    printf("O quadrado possui área igual a: %.1f m2.\n", pow(lado,2));
}