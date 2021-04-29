#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h> // Para calcular raiz e quadrado utilizando as funções sqrt() e pow().

/*Questão 03 - Leia um numero real. Se o número for positivo imprima a raiz quadrada. Do contrário,
imprima o numero ao quadrado.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float num;

    //Lendo número.
    printf("Digite um número real: ");
    scanf("%f", &num);

    //Testando número e imprimindo a raiz ou o quadrado.
    if(num > 0){
        printf("%.2f possui raiz quadrada igual a: %.2f\n", num, sqrt(num));
    }else{
        printf("%.2f ao quadrado é igual a: %.2f\n", num, pow(num,2));
    }
}