#include<iostream>
#include<stdlib.h>
#include<string>
#define TAM 10

using namespace std;

//Caso a pilha esteja vazia.
bool pilhaVazia(int topo){
    if(topo == -1){
        return true;
    }else{
        return false;
    }
}

//Confere se a pilha está cheia.
bool pilhaCheia(int topo){
    if(topo == TAM - 1){
        return true;
    }else{
        return false;
    }
}

int pilhaTamanho(int topo){
    return topo + 1;
}

//Retorna o último valor da pilha.
int pilhaGet(int pilha[TAM], int *topo){
    if(pilhaVazia(*topo)){
        cout << "A pilha está vazia!\n";
        return 0;
    }else{
        return pilha[*topo];
    }
}

void imprimeVetor(int vetor[TAM], int topo){
    //Auxiliar contador.
    int cont;

    //Imprimindo o vetor.
    for(cont = 0; cont < 10; cont++){
        cout << vetor[cont] << " - ";
    }
    cout << "\nTopo: " << topo << ",  Tamanho da pilha: " << pilhaTamanho(topo) << "\n\n";
}

//Adiciona um valor na pilha.
void pilhaPush(int pilha[TAM], int valor, int *topo){

    //Caso não possa colocar mais valores.
    if(pilhaCheia(*topo)){
        cout << "Pilha cheia!\n";
    }else{
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
}

//Remove um valor da pilha.
void pilhaPop(int pilha[TAM], int *topo){

    if(pilhaVazia(*topo)){
        cout << "A Pilha já está vazia!\n";
    }else{
        cout << "Valor Removido: " << pilha[*topo] << "\n\n";
        pilha[*topo] = 0;
        *topo = *topo - 1;
    }
}

//cria uma pilha e limpa ela.
void pilhaConstrutor(int pilha[TAM], int *topo){

    //Coloca o topo negativo para indicar uma pilha vazia.
    *topo = -1;

    //Auxiliar contador.
    int cont;

    //Limpa o vetor.
    for(cont = 0; cont < 10; cont++){
        pilha[cont] = 0;
    }
}

int main(){

    int pilha[TAM];
    int topo;   //Topo da pilha.

    pilhaConstrutor(pilha, &topo);

    imprimeVetor(pilha, topo);

    pilhaPush(pilha, 5, &topo);
    imprimeVetor(pilha, topo);

    cout << "Ultimo valor da pilha: " << pilhaGet(pilha, &topo) << "\n\n";
    pilhaPush(pilha, 7, &topo);  
    imprimeVetor(pilha, topo);
    
    pilhaPush(pilha, 7, &topo);
    pilhaPush(pilha, 7, &topo);
    pilhaPush(pilha, 7, &topo);
    pilhaPush(pilha, 7, &topo);
    pilhaPush(pilha, 7, &topo);
    pilhaPush(pilha, 7, &topo);
    pilhaPush(pilha, 7, &topo);
    pilhaPush(pilha, 7, &topo);

    pilhaCheia(topo);

    pilhaPop(pilha, &topo);
    imprimeVetor(pilha, topo);

    return 0;
}