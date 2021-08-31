#include<stdio.h>
#include<stdlib.h>

int* alocaVetor(int tamanho){
    //É criado um ponteiro auxiliar.
    int *aux;

    //Alocação dinâmica de memória.
    aux = (int*) malloc(tamanho * sizeof(int));

    //Retorna o ponteiro que aponta para a primeira posiçao de memória do vetor alocado.
    return aux;
}

int main(){

    //Definindo variáveis.
    int *vetor, tamanho, cont;

    //Lendo o tamanho do vetor pelo usuário.
    printf("Digite um tamanho para o vetor: ");
    scanf("%d", &tamanho);

    //Ponteiro recebe o endereço de meória que foi alocado para o vetor.
    vetor = alocaVetor(tamanho);

    //Coloca valores no vetor.
    for(cont = 0; cont < tamanho; cont++){
        vetor[cont] = 90;
    }

    //Imprime vetor.
    for(cont = 0; cont < tamanho; cont++){
        printf("%d\n", vetor[cont]);
    }

    //Limpar o vetor.
    free(vetor);

    //Retorno da função.
    return 0;
}