#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 34 - Faça um programa que calcule o menor número divisı́vel por cada um dos números de 1
a 20? Ex: 2520 é o menor número que pode ser dividido por cada um dos números de 1
a 10, sem sobrar resto.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int num1 = 2, num2 = 3, aux, i = 2, mmc, result = 1, mdc = 1, resto;
    
    //Calculando o menor número divisível no intevalo.
    while(num2 <= 20){
        for(i = 2; i <= num2; i++){
            aux = num1 * i;
            if((aux % num2) == 0){
                mmc = aux;
                i = num2 + 1;
                num1 = mmc;
            }
        }
        num2++;
    } 
    printf("\nMMC: %d\n", mmc);
    
    num1 = 2, num2 = 4;

    do{
        resto = num1 % num2;
        if(resto != 0){
            num1 = num2;
            num2 = resto;
        }
    }while(resto != 0);
    mdc = num1;

    printf("\nMDC: %d\n", mdc); 
    
    //Mostrando o menor número divisível.
    printf("\n-----------\nMENOR DIVISÍVEL\n-----------\n     %d\n-----------\n\n", (mmc / mdc));  
}