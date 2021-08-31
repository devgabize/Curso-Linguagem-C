#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int calculaFatorialDuplo(int N){
    if(N == 1){
        return 1;
    }else{
        return N * calculaFatorialDuplo(N - 2);
    }
}

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int N, verif = 1;

    //Lendo valor de N e verificando se é ímpar.
    do{
        printf("\nDigite um valor ímpar para N: ");
        scanf("%d", &N);
        if(N % 2 != 0){
            verif = 0;
        }else{
            printf("\n## DIGITE UM NÚMERO ÍMPAR! ##\n\n");
        }
    }while(verif == 1);

    //Chamando a função e mostrando o valor.
    printf("O fatorial duplo de %d é: %d\n\n", N, calculaFatorialDuplo(N));
}