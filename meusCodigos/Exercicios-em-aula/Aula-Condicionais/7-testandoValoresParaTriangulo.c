#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Crie um algoritmo que leia 3 valores e informe se eles são iguais entre si para formarem os lados de um triêngulo equilátero.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int val1, val2, val3;

    //Lendo os valores.
    printf("Informe o valor 1: ");
    scanf("%d", &val1);
    printf("Informe o valor 2: ");
    scanf("%d", &val2);
    printf("Informe o valor 3: ");
    scanf("%d", &val3);

    //Testando lados e mostrando resultado.
    if(val1 == val2 && val1 == val3){
        printf("Forma um triângulo equilátero!\n");
    }else{
        //Analisa se existem pelo menos dois lados iguais.
        if(val1 == val2 || val1 == val3 || val2 == val3){
            printf("Forma um triângulo isósceles\n");
        }else{
            printf("Forma um triângulo escaleno.\n\n");
        }
    }
}