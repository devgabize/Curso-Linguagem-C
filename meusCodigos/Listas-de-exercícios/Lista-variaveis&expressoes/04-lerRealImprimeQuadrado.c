#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>

//Questão 4 - Leia um número real e imprima o resultado do quadrado desse número. 

void main(){
    //Para usar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    double num, quadrado, quad;

    //Lendo número real.
    printf("Digite um número real: ");
    scanf("%lf", &num);

    //Calculando quadrado na unha.
    quadrado = num * num;

    //calculando quadrado utilizando biblioteca math.h
    quad = pow(num,2);

    //Imprimindo resultado do quadrado do número digitado.
    printf("\nO quadrado do número digitado é: %.2f\n\n", quadrado);
    printf("O quadrado (utilizando pow da math.h) do número digitado é: %.2f\n\n", quad);
}