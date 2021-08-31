#include<stdio.h>
#include<stdlib.h>
#include<new>
#include<iostream>
#include<string>

using namespace std;

int main(){

    //Definindo variáveis.
    int linhas = 3, colunas = 3, i, j;
    int **matriz;

    //Lendo o tamanho pelo usuário.
    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);

    //Alocando as linhas.
    matriz = (int **) new int[linhas];

    //Alocando memória para as colunas de cada linha.
    for(i = 0; i < linhas; i++){
        matriz[i] = (int *) new int[colunas];
    }

    //Preenchendo valores e exibindo a matriz.
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            matriz[i][j] = i;
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    //Libera a memória.
    free(matriz);


    //Retorno da função.
    return 0;
}