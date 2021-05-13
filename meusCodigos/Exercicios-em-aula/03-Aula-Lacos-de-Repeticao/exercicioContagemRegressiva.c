#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    /*Crie um algoritmo que imprima os números de 10 a 0 de forma regressiva. (Usando while, Do While ou For).*/

    //Definindo variáveis.
    int cont = 10;

    //Saltando linha por organização.
    printf("\n");

    //Contagem regressiva com while.
    while(cont >= 0){
        printf(" %d", cont);
        cont--;
    }

    //Saltando linha por organização.
    printf("\n");

    //Reinicializando a variável cont.
    cont = 10;

    //Contagem regressiva com Do While.
    do{
        printf(" %d", cont);
        cont--;
    }while(cont >= 0); 

    //Saltando linha por organização.
    printf("\n");

    //Contagem regressiva com For.
    for(cont = 10; cont >= 0; cont--){
        printf(" %d", cont);   
    }

    //Saltando linha por organização.
    printf("\n");
}