#include<iostream>
#include<new>
#include<string>
#include<stdlib.h>

using namespace std;

struct pessoa{
    string nome;
    int rg;
    struct pessoa *proximo;
};

void limpaTela(){
    system("clear");
}

int retornaTamanho(pessoa *ponteiroEncadeada){

    //Tamanho da lista.
    int tamanho = 0;

    //Ponteiro cursor auxiliar.
    pessoa *p = ponteiroEncadeada;

    while(p != NULL){

        //Atualiza o cursor.
        p = p->proximo;

        //Contador de tamanho aumenta.
        tamanho++;

    }

    return tamanho;

}

void imprimeEncadeada(pessoa *ponteiroEncadeada){

    //Ponteiro cursor auxiliar.
    pessoa *p = ponteiroEncadeada;

    cout << "\n";
    while(p != NULL){

        //Imprime a lista.
        cout << p->nome << ", " << p->rg << "\n";
        
        //Atualiza o cursor. 
        p = p->proximo;

    }
    cout << "\n";
}

int main(){

    //variáveis.
    int funcaoDesejada = 1;

    //Cria o início da lista encadeada.
    pessoa *ponteiroEncadeada;

    //Cria o primeiro valor.
    pessoa *novoPrimeiroValor = new pessoa;
    novoPrimeiroValor->nome = "john";
    novoPrimeiroValor->rg = 123;
    novoPrimeiroValor->proximo = NULL;

    //Transforma o ponteiro do inicio da lista no novo valor.
    ponteiroEncadeada = novoPrimeiroValor;

    //Cria o segundo valor.
    pessoa *novoSegundoValor = new pessoa;
    novoSegundoValor->nome = "jorge";
    novoSegundoValor->rg = 321;
    novoSegundoValor->proximo = NULL;

    //Encadeamento de valores.
    novoPrimeiroValor->proximo = novoSegundoValor;

    while(funcaoDesejada < 9 && funcaoDesejada > 0){

        //Mostrando o menu.
        cout << "\nTamanho atual: " << retornaTamanho(ponteiroEncadeada);

        //Imprime a lista.
        imprimeEncadeada(ponteiroEncadeada);

        cout << "\nOperacoes\n";
        cout << "1 - insercao de um node no inicio da lista\n";
        cout << "2 - Insercao de um node no fim da lista \n";
        cout << "3 - Insercao de um node na posicao N \n";
        cout << "4 - Retirar um node do inicio da lista \n";
        cout << "5 - Retirar um node no fim da lista \n";
        cout << "6 - Retirar um node na posicao N \n";
        cout << "7 - Procurar um node com o campo RG \n";
        cout << "8 - Imprimir a lista \n";
        cout << "9 - Sair do sistema \n";
        cout << "\nEscolha um numero e pressione ENTER:  \n";

        //Lendo opção do usuário.
        cin >> funcaoDesejada;

        limpaTela();

        //Chamando a função desejada.
        switch(funcaoDesejada){
            case 1:
                cout << "\nFunção escolhida: 1 - insercao de um node no inicio da lista\n";
                break;
            case 2:
                cout << "\nFunção escolhida: 2 - Insercao de um node no fim da lista \n";
                break;
        }
    }
    return 0;
}