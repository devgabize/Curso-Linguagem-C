#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int imprimeEmOrdemCrescenteRecursiva(int N, int x){
    if(x == N){
        printf(" %d", x);
        return 0;
    }else{
        printf(" %d", x);
        return imprimeEmOrdemCrescenteRecursiva(N, x + 1);
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
    imprimeEmOrdemCrescenteRecursiva(N, x);

    printf("\n\n");
}