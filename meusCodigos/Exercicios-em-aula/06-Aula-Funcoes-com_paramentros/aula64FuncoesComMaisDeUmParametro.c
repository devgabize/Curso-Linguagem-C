#include<stdio.h>
#include<stdlib.h>

void mostraSoma(int primeiroValor, int segundoValor){
    printf("\nA soma entre %d e %d eh %d\n", primeiroValor, segundoValor, primeiroValor + segundoValor);
}

int retornaSoma(int primeiroValor, int segundoValor){
    return primeiroValor + segundoValor;
}

int main(){
    //Definindo variáveis.
    int a = 5, b = 7;

    //Função que mostra a soma.
    mostraSoma(a,b);

    //Exibe o resultado da soma retornado pela função.
    printf("\nA soma entre %d e %d eh %d\n", a, b, retornaSoma(a,b));

    //Retorno da função.
    return 0;    
}