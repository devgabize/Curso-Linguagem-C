#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>

using namespace std;

void limpaTela(){
    system("clear");
}

void iniciaTabuleiro(char tabuleiro[3][3]){

    int linha, coluna; 

    //Navega por cada posição do tabuleiro e coloca o símbolo de '-'.
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            tabuleiro[linha][coluna] = '-';
        }
    }

}

void exibeTabuleiro(char tabuleiro[3][3]){

    int linha, coluna; 

    //Exibe o tabuleiro com suas linhas e colunas quebrando a linha ao sair de um for.
    cout << "\n";
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            cout << " " << tabuleiro[linha][coluna];
        }       
        cout << "\n";
    }
    cout << "\n";

}

void jogo(){

    ///Variáveis Gerais.
    char tabuleiro[3][3];                          //Tabuleiro do jogo.
    int linha, coluna;                             //Auxiliares para tabuleiro.

    //Coloca os '-' no tabuleiro para indicar o vazio.
    iniciaTabuleiro(tabuleiro);

    //Exibe o tabuleiro na tela.
    exibeTabuleiro(tabuleiro);

}

void menuInicial(){

     //Opção escolhida pelo usuário.
    int opcao = 0;

    //Enquanto o jogador não digita uma opão válida, mostra o menu novamente!
    while(opcao < 1 || opcao > 3){

        limpaTela();
        
        cout << "\nBEM-VINDO AO JOGO DA VELHA!\n";
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
                jogo();
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