#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Preencha uma matriz 2 x 2 lendo valores do usuário e depois troque os valores entre a primeira e a segunda linha. exemplo: leu a mariz [1][2] imprime a matriz [3][4]
                                    [3][4]                  [1][2]*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo matriz.
    int matriz[2][2], aux[2][2], aux1, aux2;

    //Lendo valores para matriz.
    printf("Digite os 4 elementos da matriz: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Digite um valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    aux1 = matriz[0][0];
    aux2 = matriz[0][1];

    //Invertendo matriz.
    matriz[0][0] = matriz[1][0];
    matriz[0][1] = matriz[1][1];
    matriz[1][0] = aux1;
    matriz[1][1] = aux2;

    printf("\n");
    //Imprimindo nova matriz.
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
