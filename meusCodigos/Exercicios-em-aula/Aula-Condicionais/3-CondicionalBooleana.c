#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 
#include<locale.h>

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    bool a = true, b = false;

    //Se A for verdadeiro.
    if(a){
        printf("A é verdadeiro!\n");
    }

    //Comparando o B.
    if(b){
        printf("B é verdadeiro!\n");
    }else{
        printf("B é falso!\n");
    }

    //Comparando uma falsidade.
    if(!b){
        printf("B é falso\n");
    }

    //Pausa o programa após executar.
    system("pause");
}