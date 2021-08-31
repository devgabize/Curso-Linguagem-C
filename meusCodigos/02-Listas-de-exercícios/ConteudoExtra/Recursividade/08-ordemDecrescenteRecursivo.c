#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int imprimeEmOrdemCrescenteRecursiva(int N){
    if(N == 0){
        printf(" %d", N);
        return 0;
    }else{
        printf(" %d", N);
        return imprimeEmOrdemCrescenteRecursiva(N - 1);
    }
}

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int N, x = 0;

    //Lendo o valor de N.
    printf("Digite um valor para limite da contagem: ");
    scanf("%d", &N);

    //Chamando a função.
    imprimeEmOrdemCrescenteRecursiva(N);

    printf("\n\n");
}