#include<stdlib.h>
#include<stdio.h>

char retornaLetra(){
    return 120;
}

int main(){
    //Definindo variáveis.
    char letra;

    //Char recebendo valor de uma função.
    letra = retornaLetra();

    //Imprimindo novo valor.
    printf("%c\n", letra);

    return 0;
}