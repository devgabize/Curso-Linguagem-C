#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    /*Crie um algoritmo que imprima os números pares de 10 a 20 (usando While, Do While ou For).*/

    //Definindo variáveis.
    int cont = 10;

    //Imprimindo os números pares entre 10 a 20, usando While.
    while(cont <= 20){
        if(cont % 2 == 0){
            printf("%d é par!\n", cont);
        }
        cont++;
    }

    //Pulando linha para organização.
    printf("\n");

    //Reinicializando a variável cont.
    cont = 10;

    //Imprimindo os números pares entre 10 a 20, usando Do While.
    do{
        if(cont % 2 == 0){
            printf("%d é par!\n", cont);
        }
        cont++;
    }while(cont <= 20);  

    //Pulando linha para organização.
    printf("\n");

    //Imprimindo os números pares entre 10 a 20, usando For.
    for(cont = 10; cont <= 20; cont++){
        if(cont % 2 == 0){
            printf("%d é par!\n", cont);
        }    
    }

    //Pulando linha para organização.
    printf("\n");
}