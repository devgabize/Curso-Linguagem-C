#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int calculaFatorialRecursivo(int N){
    if(N == 0){
        return 1;
    }else{
        return N * calculaFatorialRecursivo(N - 1);
    }
}

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int N;

    //Lendo valor de N.
    printf("Digite o valor para calcular o fatorial :");
    scanf("%d", &N);

    //Chamando a função e mostrando o resultado.
    printf("\nO fatorial de %d é: %d\n\n", N, calculaFatorialRecursivo(N));
}