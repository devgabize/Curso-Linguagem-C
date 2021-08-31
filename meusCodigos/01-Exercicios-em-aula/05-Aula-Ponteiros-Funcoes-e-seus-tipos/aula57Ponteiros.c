#include<stdlib.h>
#include<stdio.h>

int main(){
    //Variável.
    int a = 20;

    //Imprimindo o valor de uma variável.
    printf("Valor de a: %d \n", a);

    //Imprimindo o endereço de uma variável.
    printf("Endereço de a: %d \n", &a);

    //Variáveis armazenam valores.
    int b = 10;

    //Ponteiros armazenam posições na memória.
    int *ponteiro;

    //Ponteiro recebendo a posição na memória da variável b.
    ponteiro = &b;

    //Impriimindo o valor de uma variável.
    printf("Valor de b: %d \n", b);

    //* pode ser lido como "Conteúdo apontado por".
    *ponteiro = 40;

    //Imprimindo o valor de uma variável.
    printf("Valor de b: %d \n", b);

    return 0;
}