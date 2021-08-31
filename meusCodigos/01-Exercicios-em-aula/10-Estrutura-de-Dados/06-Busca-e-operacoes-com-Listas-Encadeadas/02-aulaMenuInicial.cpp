#include<iostream>
#include<new>
#include<string>
#include<stdlib.h>

using namespace std;

void limpaTela(){
    system("clear");
}

int main(){

    //variáveis.
    int funcaoDesejada = 1;

    while(funcaoDesejada < 9 && funcaoDesejada > 0){

        //Mostrando o menu.
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