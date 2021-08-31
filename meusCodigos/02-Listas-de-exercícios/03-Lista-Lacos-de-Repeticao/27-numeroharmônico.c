#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 27 - Em Matemática, o número harmônico designado por H(n) define-se como sendo a soma
da série harmónica:
                        H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
Faça um programa que leia um valor n inteiro e positivo e apresente o valor de H(n).*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float H = 0;
    int n, i;

    //Lendo valor n.
    printf("Digite um valor para encontrar o número harmônico: ");
    scanf("%d", &n);

    //Realizando a soma do número harmônico.
    for(i = 1; i <= n; i++){
        H += (1.0 / i); 
    }

    //Mostrando o resultado da soma.
    printf("\n----------\nVALOR DE H(%d) = %.2f\n----------\n\n", n, H);
}