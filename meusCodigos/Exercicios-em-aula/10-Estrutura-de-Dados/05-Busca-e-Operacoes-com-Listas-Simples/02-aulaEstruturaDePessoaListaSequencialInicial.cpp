#include<iostream>
#include<new>
#include<string>
#include<stdlib.h>

using namespace std;

struct pessoa{
    string nome;
    int rg;
};

void limpaTela(){
    system("CLS");
}

void imprimeSequencial(pessoa *ponteiroSequencial, int tamanhoDaLista){
    int cont;
    for(cont = 0; cont < tamanhoDaLista; cont++){
        cout << cont << " - " << ponteiroSequencial[cont].nome << ", " << ponteiroSequencial[cont].rg << "\n";
    }
    cout << "\n";
}

int main(){
    //Variáveis.
    int funcaoDesejada = 1;

    //Ponteiro para a lista sequencial.
    pessoa *ponteiroSequencial;

    //Tamanho da lista.
    int tamanhoDaLista = 0;

    //EXEMPLO
    pessoa *exemploListaSequencial = new pessoa[2];

    //Dois registros de exemplo.
    exemploListaSequencial[0].nome = "John";
    exemploListaSequencial[0].rg = 123;
    exemploListaSequencial[1].nome = "Maicon";
    exemploListaSequencial[1].rg = 321;

    //Faz o ponteiro principal apontar para o novo vetor.
    ponteiroSequencial = exemploListaSequencial;

    //Imprime a lista completa.
    imprimeSequencial(ponteiroSequencial, 2);
    
    //Menu.
    while(funcaoDesejada < 10 && funcaoDesejada > 0){
        //Mostrando o menu.
        cout << "Operacoes \n";
        cout << "1 - Insercao de um node no inicio da lista \n";
        cout << "2 - Insercao de um node no fim da lista \n";
        cout << "3 - Insercao de um node na posicao N \n";
        cout << "4 - Retirar um node do inicio da lista \n";
        cout << "5 - Retirar um node no fim da lista \n";
        cout << "6 - Retirar um node na posicao N \n";
        cout << "7 - Procurar um node com o campo RG \n";
        cout << "8 - Imprimir a lista \n";
        cout << "9 - Sair do sistema \n";
        cout << "\nEscolha um numero e pressione ENTER:  \n";

        //Lendo a opcao do usuário.
        cin >> funcaoDesejada;
    }

}