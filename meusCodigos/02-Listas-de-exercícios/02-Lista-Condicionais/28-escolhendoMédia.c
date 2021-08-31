#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/*Questão 28 - Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário:
    - Geométrica: raiz cúbica(x ∗ y ∗ z);
    - Ponderada: (x+(2∗y)+(3∗z)) / 6 
    - Harmônica: 1 / ((1/x)+(1/y)+(1/z);
    - Aritmética: (x+y+z) / 3.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int x, y, z, opc;

    //Lendo os três valores inteiros.
    printf("Digite 3 valores inteiros positivos: ");
    scanf("%d %d %d", &x, &y, &z);

    //Testando se os números digitados são positivos.
    if(x > 0 && y > 0 && z > 0){
        //Mostrando menu com tipos de média e criando switch para realizar os cálculos.
        printf("ESCOLHA O TIPO DE MÉDIA QUE DESEJA REALIZAR:\n");
        printf("  1- Geométrica\n  2- Ponderada\n  3- Harmônica\n  4- Aritmética\nOPÇÃO: ");
        scanf("%d", &opc);

        switch(opc){
            case 1:
                printf("MÉDIA GEOMÉTRICA = %.2f\n", pow((x * y * z),(1.0 / 3.0)));
                break;
            case 2:
                printf("MÉDIA PONDERADA = %.2f\n", (x + (y * 2.0) + (z * 3.0)) / 6.0);
                break;
            case 3:
                printf("MÉDIA HARMÔNICA = %.2f\n", 1.0 / ((1.0 / x) + (1.0 / y) + (1.0 / z)));
                break;
            case 4:
                printf("MÉDIA ARITMÉTICA = %.2f\n", (x + y + z) / 3.0);
                break;
        }
    }else{
        printf("\n  O NÚMERO DEVE SER INTEIRO E POSITIVO!\n\n");
    }
}