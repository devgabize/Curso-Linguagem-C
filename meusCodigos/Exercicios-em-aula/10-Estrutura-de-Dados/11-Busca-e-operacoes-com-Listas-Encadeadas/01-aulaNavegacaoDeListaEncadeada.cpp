#include<stdio.h>
#include<stdlib.h>
#include<new>

struct estrutura{
    int valorNumerico;
    struct estrutura *proximo;
};

int main(){

    //Cria o início da lista.
    estrutura *ponteiroEncadeada;

    //Cria um novo valor.
    estrutura *novoPrimeiroValor = new estrutura;
    novoPrimeiroValor->valorNumerico = 13;
    novoPrimeiroValor->proximo = NULL;

    //Faz o ponteiro da encadeada apontar para o primeiro valor.
    ponteiroEncadeada = novoPrimeiroValor;

    //Cria um segundo valor.
    estrutura *novoSegundoValor = new estrutura;
    novoSegundoValor->valorNumerico = 20;
    novoSegundoValor->proximo = NULL;

    //Junta os valores com um encadeamento.
    ponteiroEncadeada->proximo = novoSegundoValor;

    //Imprime a lista encadeada.
    while(ponteiroEncadeada != NULL){

        //Imprime o valor atual.
        printf("\nValor: %d", ponteiroEncadeada->valorNumerico);

        //Cursor recebe a posição de memória do próximo valor.
        ponteiroEncadeada = ponteiroEncadeada->proximo;
    }
    printf("\n\n");

    return 0;
}