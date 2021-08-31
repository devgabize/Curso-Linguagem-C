#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>

/*QUESTÃO 42 - Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e
escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize
a entrada de dados com um valor negativo ou zero.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float num, quad, cub, raiz;

    //Lendo os valores, realizando os calculos e mostrando na tela.
    do{
        printf("\nDigite um valor para realizar os calculos e para finalizar o programa digite um valor IGUAL ou MENOR que 0 (ZERO)\n");

        printf("Digite o valor: ");
        scanf("%f", &num);

        if(num > 0){
            quad = pow(num, 2);
            cub = pow(num, 3);
            raiz = sqrt(num);

            printf("\nQUADRADO: %.2f\nCUBO: %.2f\nRAIZ: %.2f\n", quad, cub, raiz);
        }

    }while(num > 0);

    printf("\n# PROGRAMA FINALIZADO! #\n\n");
}