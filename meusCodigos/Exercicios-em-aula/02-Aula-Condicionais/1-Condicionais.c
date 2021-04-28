#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int a = 4, opcao = 3;
    float b = 2.5;
    char c = 'x';

    //Condicional Simples.
    if(a == 5){
        printf("A variável a = 5.\n");
    }
    if(b == 2.5){
        printf("A variável b = 2.5.\n");
    }
    if(c == 'x'){
        printf("A variável c = letra x.\n");
    }

    //Número par ou impar.
    if(a % 2 == 1){
        printf("A variável a é impar!\n");
    }else{
        printf("A variável a é par!\n");
    }

    //Condicional Composta.
    if(opcao == 1){
        printf("a opcao = 1.\n");
    }else if(opcao == 2){
        printf("A opcao = 2.\n");
    }else{
        printf("A opcao não é igual a 1 nem 2.\n");
    }

    //Pausa o programa após executar
    system("pause");
}