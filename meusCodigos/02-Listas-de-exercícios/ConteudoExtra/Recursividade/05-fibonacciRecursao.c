#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int calculaSequenciaFibonacciRecursao(int n){
    if(n == 0 || n == 1){
        return n;
    }else{
        return (calculaSequenciaFibonacciRecursao(n - 1) + calculaSequenciaFibonacciRecursao(n - 2));
    }
}

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int n;

    //Lendo valor de n.
    printf("Informe até qual termo deseja calcula a sequência de Fibonacci: ");
    scanf("%d", &n);

    //Chamando a função e mostrando resultado.
    printf("A sequência de fibonacci até o %dº termo é: %d\n", n, calculaSequenciaFibonacciRecursao(n));
    printf("\n\n");
}