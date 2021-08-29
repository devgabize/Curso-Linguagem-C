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
    system("clear");
}

void imprimeSequencial(pessoa *ponteiroSequencial, int tamanhoDaLista){
    int cont;
    cout << "\n";
    for(cont = 0; cont < tamanhoDaLista; cont++){
        cout << cont << " - " << ponteiroSequencial[cont].nome << ", " << ponteiroSequencial[cont].rg << "\n";
    }
    cout << "\n";
}

void adcComecoSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista, string nome, int rg){

    //Se a lista for vazia cria uma lista nova.
    if(*tamanhoDaLista == 0){
        pessoa *novaListaSequencial = new pessoa[1];

        //Insere o primeiro novo elemento.
        novaListaSequencial[0].nome = nome;
        novaListaSequencial[0].rg = rg;

        //Atualiza o ponteiro para a lista nova.
        ponteiroSequencial = novaListaSequencial;
    }else{
        //Caso a lista já tenha membros.
        pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista + 1];

        //Insere o primeiro novo elemento.
        novaListaSequencial[0].nome = nome;
        novaListaSequencial[0].rg = rg;

        //Passa os elementos do vetor antigo para o novo.
        int cont;

        for(cont = 0; cont < *tamanhoDaLista; cont++){
            novaListaSequencial[cont + 1].nome = ponteiroSequencial[cont].nome;
            novaListaSequencial[cont + 1].rg = ponteiroSequencial[cont].rg;
        }

        //Atualiza o ponteiro para a lista nova.
        ponteiroSequencial = novaListaSequencial;

    }

    //Aumenta o tamanho da lista.
    *tamanhoDaLista = *tamanhoDaLista + 1;

}

int main(){
    //Variáveis.
    int funcaoDesejada = 1;

    //Ponteiro para a lista sequencial.
    pessoa *ponteiroSequencial;

    //Tamanho da lista.
    int tamanhoDaLista = 0;

    /*
    //EXEMPLO
    pessoa *exemploListaSequencial = new pessoa[2];

    //Dois registros de exemplo.
    exemploListaSequencial[0].nome = "John";
    exemploListaSequencial[0].rg = 123;
    exemploListaSequencial[1].nome = "Maicon";
    exemploListaSequencial[1].rg = 321;

    //Faz o ponteiro principal apontar para o novo vetor.
    ponteiroSequencial = exemploListaSequencial;*/
    
    //Menu.
    while(funcaoDesejada < 10 && funcaoDesejada > 0){

        //Imprime a lista completa.
        imprimeSequencial(ponteiroSequencial, tamanhoDaLista);

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

        limpaTela();

        //Variáveis usadas nas operações.
        string nome;
        int rg;

        //Chama a função desejadda.
        switch(funcaoDesejada){
            case 1:
                cout << "Funcao escolhida: 1 - Insercao de um node no inicio da lista\n";

                cout << "Digite um nome: ";
                cin >> nome;
                cout << "Digite um RG: ";
                cin >> rg;

                adcComecoSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg);

                break;
            
            case 2:
                cout << "Funcao escolhida: 2\n";
                break;
        }
    }

}