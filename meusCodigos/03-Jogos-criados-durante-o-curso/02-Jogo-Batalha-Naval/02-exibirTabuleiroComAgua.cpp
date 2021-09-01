#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>

using namespace std;

void limpaTela(){
    system("clear");
}

void iniciaTabuleiro(char tabuleiro[10][10]){

    //Popula o tabuleiro com água.
    int linha, coluna;
    for(linha = 0; linha < 10; linha++){
        for(coluna = 0; coluna < 10; coluna++){
            tabuleiro[linha][coluna] = 'A';
        }
    }

}

void exibeTabuleiro(char tabuleiro[10][10]){
    
    //Exibe o tabuleiro.
    int linha, coluna; 
    for(linha = 0; linha < 10; linha++){
        for(coluna = 0; coluna < 10; coluna++){
           cout << tabuleiro[linha][coluna] << " ";
        }
        cout << "\n";
    }  
    cout << "\n";

}

void jogo(){
    
    ///Variáveis Gerais.
    char tabuleiro[10][10];                        //Tabuleiro do jogo.
    int linha, coluna;                             //Auxiliares de navegação. 

    //Inicia o tabuleiro com água.
    iniciaTabuleiro(tabuleiro);      

    //Exibe tabuleiro.
    exibeTabuleiro(tabuleiro);

}

void menuInicial(){
    //Opção escolhida pelo usuário.
    int opcao = 0;

    //Enquanto o jogador não digita uma opção válida, mostra o menu novamente!
    while(opcao < 1 || opcao > 3){

        limpaTela();

        cout << "\nBEM-VINDO AO JOGO DE BATALHA NAVAL!\n";
        cout << "1 - Jogar\n";
        cout << "2 - Sobre\n";
        cout << "3 - Sair\n";
        cout << "Escolha uma opção e tecle ENTER: ";

        //Faz a leitura da opção.
        cin >> opcao;

        //Faz algo de acordo com a opção escolhida.
        switch(opcao){
            case 1:
                //Inicia o jogo.
                cout << "\nJogo iniciado!\n";
                jogo();
                break;
            case 2:
                //Exibe informações do jogo.
                cout << "\nInformações do jogo:\n";
                break;
            case 3:
                //Finaliza o jogo.
                cout << "\nATÉ MAIS!\n";
                break;
        }

    }
}

int main(){

    menuInicial();

    return 0;
}