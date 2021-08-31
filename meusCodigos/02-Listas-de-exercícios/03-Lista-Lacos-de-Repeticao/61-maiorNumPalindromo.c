#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 61 - Faça um programa que calcule o maior número palı́ndromo feito a partir do produto de
dois números de 3 dı́gitos. Ex: O maior palı́ndromo feito a partir do produto de dois números de dois dı́gitos é 9009 = 91*99.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int pali, maiorPali, alg1, alg2, alg3, alg4, alg5, alg6, aux;

    //Procurando o maior polindromo.
    for(int i = 100; i <= 999; i++){
        for(int j = 100; j <= 999; j++){
            pali = i * j;
            aux = pali;
            alg1 = pali / 100000;
            pali = pali % 100000;
            alg2 = pali / 10000;
            pali = pali % 10000;
            alg3 = pali / 1000;
            pali = pali % 1000;
            alg4 = pali / 100;
            pali = pali % 100;
            alg5 = pali / 10;
            pali = pali % 10;
            alg6 = pali;
            if(alg1 == alg6 && alg2 == alg5 && alg3 == alg4){
                maiorPali = aux;
            }        
        }
    }

    //Mostrando resultado.
    printf("\nO maior palı́ndromo é %d\n\n", maiorPali);
}