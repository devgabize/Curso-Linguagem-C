#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

float calculaSerie(int N){
    float S = 0.0;
    for(int i = 1; i <= N; i++){
        S += (pow(i, 2) + 1) / (i + 3);
    }

    return S;
} 

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int N;

    //Lendo o valor de N;
    printf("Digite um valor para limite da série: ");
    scanf("%d", &N);

    //Chamando a função, passando N e mostrando resultado.
    printf("\nO resultado da série até %d é: %.2f\n\n", N, calculaSerie(N));
    
}