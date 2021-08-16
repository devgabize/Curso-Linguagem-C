#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int *vetor;

    //Alocando dinamicamento o array.
    vetor = (int *)malloc(5 * sizeof(int));

    //Lendo os valores do vetor.
    printf("Digite valores para o vetor!\n");
    for(int i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    //Mostrando os valores digitados do vetor.
    printf("\nValores digitados do vetor\n vetor = { ");
    for(int i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }
    printf("}\n\n");

    free(vetor);
}