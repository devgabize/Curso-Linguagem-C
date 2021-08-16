#include <stdio.h>
#include <stdlib.h>
#include <new>

int main(){

    //Definindo variáveis.
    int tamanho, cont;

    //Lendo o tamanho.
    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);

    //Criando um ponteiro que recebe o novo vetor vazio.
    int *vetor = new int[tamanho];

    //Modificando e Imprimindo valores.
    for(cont = 0; cont < tamanho; cont++){
        vetor[cont] = cont;
        printf("%d\n", vetor[cont]);
    }

    free(vetor);

    //Retorno da função.
    return 0;
}