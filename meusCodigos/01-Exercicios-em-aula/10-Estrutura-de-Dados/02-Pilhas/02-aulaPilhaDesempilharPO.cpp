#include<iostream>
#include<stdlib.h>
#include<string>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[TAM], int topo){
    //Auxiliar contador.
    int cont;

    //Imprimindo o vetor.
    for(cont = 0; cont < 10; cont++){
        cout << vetor[cont] << " - ";
    }
    cout << "\nTopo: " << topo << "\n\n";
}

void pilhaPush(int pilha[TAM], int valor, int *topo){

    //Caso não possa colocar mais valores.
    if(*topo == TAM - 1){
        cout << "Pilha cheia!\n";
    }else{
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
}

void pilhaPop(int pilha[TAM], int *topo){

    if(*topo == -1){
        cout << "A Pilha já está vazia!\n";
    }else{
        cout << "Valor Removido: " << pilha[*topo] << "\n\n";
        pilha[*topo] = 0;
        *topo = *topo - 1;
    }
}

int main(){

    int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int topo = -1;   //Topo da pilha.

    imprimeVetor(pilha, topo);

    pilhaPush(pilha, 5, &topo);
    imprimeVetor(pilha, topo);

    pilhaPush(pilha, 7, &topo);  
    imprimeVetor(pilha, topo);
    
    pilhaPop(pilha, &topo);
    imprimeVetor(pilha, topo);

    return 0;
}