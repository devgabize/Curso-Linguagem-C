#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>

using namespace std;

void limpaTela(){
    system("clear");
}

void menuInicial(){

     //Opção escolhida pelo usuário.
    int opcao = 0;

    //Enquanto o jogador não digita uma opão válida, mostra o menu novamente!
    while(opcao < 1 || opcao > 3){

        limpaTela();
        
        cout << "\nBEM-VINDO AO JOGO!\n";
        cout << "1 - Jogar\n";
        cout << "2 - Sobre\n";
        cout << "3 - Sair\n";
        cout << "Escolha uma opção e tecle ENTER: ";

        //Faz a leitura da opção.
        cin >> opcao;

        //Faz algo de acordo com a opção escolhida.
        switch(opcao){
            case 1:
                //Inicia do jogo.
                cout << "\nJogo iniciado!\n";
                break;
            case 2:
                //Informações do jogo.
                cout << "\nInformações do jogo:\n";
                break;
            case 3:
                //Sair do jogo.
                cout << "\nATÉ MAIS!\n\n";
                break;
        }
    }
}

int main(){

    menuInicial();

    return 0;
}