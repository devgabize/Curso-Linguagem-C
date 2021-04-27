#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

/*Questão 35 - Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
hipotenusa = √a2 + b3. Faça um programa que receba os valores de a e b e calcule o valor da hipotenusa através da equação. Imprima o resultado dessa operação.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float hipotenusa, a, b;

    //Lendo valores dos catetos do triângulo.
    printf("Digite os catetos do triângulo: ");
    scanf("%f %f", &a, &b);

    //Calculando hipotenusa.
    hipotenusa = sqrt(pow(a,2)+pow(b,2));

    //Mostrando resultado na tela.
    printf("\nCatetos informados: %.2f; %.2f\nHipotenusa do triângulo: %.2f\n\n", a, b, hipotenusa);
}