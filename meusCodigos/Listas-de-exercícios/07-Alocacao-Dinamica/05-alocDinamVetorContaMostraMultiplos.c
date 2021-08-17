#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definido variáveis.
    int *vet, N, X, mult = 0;

    //Lendo o valor de N par ao tamanho do vetor.
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    vet = (int*)malloc(N * sizeof(int));

    //Lendo os valores do vetor.
    printf("Digite valores para o vetor!");
    for(int i = 0; i < N; i++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    //Lendo o valor de X.
    printf("Digite um valor para encontrarmos os múltiplos dele no vetor: ");
    scanf("%d", &X);

    //Verificando os múltiplos.
    printf("Múltiplos de %d = { ", X);
    for(int i = 0; i < N; i++){
        if(vet[i] % X == 0){
            mult++;
            printf("%d ", vet[i]);
        }
    }
    printf("}\nForam encontrados: %d múltiplos!\n\n", mult);

    //Liberando memória desalocando o vetor.
    free(vet);
}