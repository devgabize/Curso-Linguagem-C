#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int calculaFatorialQuadruplo(int N, int x){
    if(N == 1){
        return 1;
    }else if(x > N){
        return x * calculaFatorialQuadruplo(N, (x - 1));
    }else{
        return (x / N) * calculaFatorialQuadruplo((N - 1), (x - 1));
    }
}

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int N;

    //Lendo valor de N.
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    //Chamando a função e mostrando resultado.
    printf("\nO fatorial quadrúplo de %d é: %d\n\n", N, calculaFatorialQuadruplo(N, (2 * N)));
}