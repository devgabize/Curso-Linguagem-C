#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/*QUESTÃO 36 - Faça um programa que calcule a diferença entre a soma dos quadrados dos primeiros
100 números naturais e o quadrado da soma. Ex: A soma dos quadrados dos dez pri-
meiros números naturais é,
                    1² + 2² + ... + 10² = 385
O quadrado da soma dos dez primeiros números naturais é,
                (1 + 2 + ... + 10)² = 552 = 3025*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int i, somaQuadrados = 0, somaNaturais = 0;

    //Calculando a soma dos quadrados e dos naturais.
    for(i = 1; i <= 100; i++){
        somaQuadrados += pow(i, 2);
        somaNaturais += i;
    }

   //Calculando o quadrado da soma e mostrando o valor da difrença.
   printf("\nDiferença entre a soma dos quadrados e o quadrado da soma é: %d\n", abs((somaQuadrados - (pow(somaNaturais, 2)))));
}