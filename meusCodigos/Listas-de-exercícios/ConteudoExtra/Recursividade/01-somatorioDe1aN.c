#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int calculaSomatorioRecursao(int N){
    if(N == 0){
        return 0;
    }else{
        return N + calculaSomatorioRecursao(N - 1);
    }
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int N;

    //Lendo varlor de N.
    printf("Digite um valor para o somatório: ");
    scanf("%d", &N);

    //Chamando a função e mostrando resultado.
    printf("\nO somatório de 1 até %d é: %d\n\n", N, calculaSomatorioRecursao(N));
}