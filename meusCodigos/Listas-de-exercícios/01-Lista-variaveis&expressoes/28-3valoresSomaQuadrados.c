#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h> //Para calcular o quadrado dos valores de forma rápida.

/*Questão 28 - Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos
três valores lidos.*/

/*OBS: Como está utilizando a biblioteca math.h se for executar o código no terminal do linux, na linha de comando digita o prefixo -lm para o compilador considerar a biblioteca.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definido variáveis.
    float a, b, c, soma;
    int i = 1;

    //Lendo os 3 valores de uma só vez.
    printf("Informe 3 valores: ");
    scanf("%f %f %f", &a, &b, &c);

    //Calculando a soma dos quadrados e utilizando a função pow da biblioteca math.h.
    soma = pow(a,2) + pow(b,2) + pow(c,2);

    //Mostrando na tela a soma dos quadrados.
    printf("A soma dos quadrados dos valores %.0f, %.0f e %.0f é igual a: %.0f.\n", a, b, c, soma);
}