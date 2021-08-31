#include<stdio.h>
#include<iostream>
#include<new>
#include<string>
#include<stdlib.h>
#define TAM 10

using namespace std; // para utilizar cout

int buscaBinaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){
    int esquerda = 0;       //Limite da esquerda;
    int direita = TAM - 1;  //Limite da direita;
    int meio;               //o meio onde fica o cursor.

    while(esquerda <= direita){
        //Encontra o meio da análise.
        meio = (esquerda + direita) / 2;

        //Quando o valor do meio é encontrado.
        if(valorProcurado == vetor[meio]){
            *posicaoEncontrada = meio;
            return 1;
        }

        //Ajustando os limites laterais.
        if(vetor[meio] < valorProcurado){
            esquerda = meio + 1;
        }else{
            direita = meio - 1;
        }
    }
    
    return -1;
    
}

void imprimeVetor(int vetor[TAM]){
    //Auxiliar contador.
    int cont;

    //Imprime o vetor.
    for(cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";
    }
    cout << "\n";
}

int main(){

    int vetor[TAM] = {1, 23, 44, 56, 63, 72, 84, 90, 98};
    int valorProcurado;
    int posicaoEncontrada, cont;

    //Imprime o vetor.
    imprimeVetor(vetor);

    //Lendo o número buscado.
    printf("Qual o número deseja encontrar? ");
    scanf("%d", &valorProcurado);

    if(buscaBinaria(vetor, valorProcurado, &posicaoEncontrada) == 1){
        cout << "O valor foi encontrado na posicao: " << posicaoEncontrada;
    }else{
        cout << "Valor nao foi encontrado!";
    }
    cout << "\n\n";


    return 0;
}