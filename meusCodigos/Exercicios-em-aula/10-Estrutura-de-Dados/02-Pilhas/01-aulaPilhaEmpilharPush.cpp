#include<iostream>
#include<stdlib.h>
#include<string>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[TAM]){
    //Auxiliar contador.
    int cont;

    //Imprimindo o vetor.
    for(cont = 0; cont < 10; cont++){
        cout << vetor[cont] << " - ";
    }
    cout << "\n\n";
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

int main(){

    int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int topo = -1;   //Topo da pilha.

    imprimeVetor(pilha);

    pilhaPush(pilha, 5, &topo);
    pilhaPush(pilha, 7, &topo);  
    pilhaPush(pilha, 5, &topo);
    pilhaPush(pilha, 7, &topo); 
    pilhaPush(pilha, 5, &topo);
    pilhaPush(pilha, 7, &topo); 
    pilhaPush(pilha, 5, &topo);
    pilhaPush(pilha, 7, &topo); 
    pilhaPush(pilha, 5, &topo);
    pilhaPush(pilha, 7, &topo); 
    pilhaPush(pilha, 5, &topo);
    pilhaPush(pilha, 7, &topo); 

    imprimeVetor(pilha);
    return 0;
}