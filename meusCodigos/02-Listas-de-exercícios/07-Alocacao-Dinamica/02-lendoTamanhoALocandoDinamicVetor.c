#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int* alocaDinamicamente(int tamanho){
    int *aux;
    //Alocando memória.
    aux = (int*) malloc(tamanho * sizeof(int));
    //Retornando o ponteiro que aponta para a primeira posição do vetor alocado.
    return aux;
}

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int *vetor, tamanho;

    //Lendo o tamanho do vetor.
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    //Chamando a função e passando o tamanho do vetor.
    vetor = alocaDinamicamente(tamanho);

    //Lendo os valores do vetor.
    printf("Digite valores para o vetor:\n");
    for(int i = 0; i < tamanho; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    //Imprimindo os valores do vetor.
    printf("\nValores digitados do vetor:\nVETOR = { ");
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("}\n\n");

    free(vetor);
}