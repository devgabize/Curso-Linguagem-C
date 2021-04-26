#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 29 - Leia quatro notas, calcule a média aritmética e imprima o resultado.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float nota1, nota2, nota3, nota4, media;

    //Lendo as quatro notas de uma só vez.
    printf("Digite as 4 notas: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    //Calculando média aritmética.
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    //Mostrando resultado na tela.
    printf("A média das 4 notas digitadas é igual a: %.1f.\n", media);
}