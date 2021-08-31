#include<stdio.h>
#include<stdlib.h>
#define TAM 3
#include<new>

//Aloca um vetor do tamanho pedido.
int* alocaVetor(int tam){

    //Cria um ponteiro auxiliar.
    int *v;

    //Aloca memória para o novo vetor.
    v = (int *) malloc(tam * sizeof(int));

    return v;
} 

//Imprime a lista sequencial.
void imprimeSequencial(int *vetor, int tamanhoDaListaSequencial){

    int cont;

    //Exibindo valores.
    for(cont = 0; cont < tamanhoDaListaSequencial; cont++){
        printf("\nValor %d: %d", cont, vetor[cont]);
    }
    printf("\n\n");
}

int main(){

    //variáveis.
    int vetor[TAM] = {1,2,3}, cont, tamanhoDaLista;

    //Exibindo valores.
    for(cont = 0; cont < TAM; cont++){
        printf("\nValor %d: %d", cont, vetor[cont]);
    }
    printf("\n\n");

    imprimeSequencial(vetor, 3);

    //Lendo novos valores.
     for(cont = 0; cont < TAM; cont++){
        scanf("%d", &vetor[cont]);
    }

    imprimeSequencial(vetor, 3);

    //Pedindo tamanho do vetor.
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoDaLista);

    //Ponteiro para o nvo vetor.
    int *vetorLidoNaHora;

    //Passa o espaço da memória que foi criado para o vetor.
    vetorLidoNaHora = alocaVetor(tamanhoDaLista);

    //Lendo novos valores.
     for(cont = 0; cont < tamanhoDaLista; cont++){
        scanf("%d", &vetorLidoNaHora[cont]);
    }

    imprimeSequencial(vetorLidoNaHora, tamanhoDaLista);
    
    //Criando com C++.
    int *vetorEmCPlusPlus = new int [5];

    //lendo novos valores.
    for(cont = 0; cont < 5; cont++){
        scanf("%d", &vetorEmCPlusPlus[cont]);
    }

    imprimeSequencial(vetorEmCPlusPlus, 5);

    return 0;
}