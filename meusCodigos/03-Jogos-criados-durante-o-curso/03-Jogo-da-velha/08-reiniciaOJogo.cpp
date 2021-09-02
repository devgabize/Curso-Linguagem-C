#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>

using namespace std;

//Área de definição de cabeçalho de função.
void menuInicial();

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

//1 = X venceu, 2 = O venceu, 0 = Nada aconteceu.
int confereTabuleiro(char tabuleiro[3][3]){

    int linha, coluna;

    //Confere linhas.
        for(linha = 0; linha < 3; linha++){
            if(tabuleiro[linha][0] == 'X' && tabuleiro[linha][0] == tabuleiro[linha][1] && tabuleiro[linha][1] == tabuleiro[linha][2]){
                return 1;
            } else if(tabuleiro[linha][0] == 'O' && tabuleiro[linha][0] == tabuleiro[linha][1] && tabuleiro[linha][1] == tabuleiro[linha][2]){
                return 2;
            }
        }

        //Confere colunas.
        for(coluna = 0; coluna < 3; coluna++){
            if(tabuleiro[0][coluna] == 'X' && tabuleiro[0][coluna] == tabuleiro[1][coluna] && tabuleiro[1][coluna] == tabuleiro[2][coluna]){
                return 1;
            } else if(tabuleiro[0][coluna] == 'O' && tabuleiro[0][coluna] == tabuleiro[1][coluna] && tabuleiro[1][coluna] == tabuleiro[2][coluna]){
                return 2;
            }
        }

        //Confere diagonal principal.
        if(tabuleiro[0][0] != '-' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]){

            if(tabuleiro[0][0] == 'X'){
                return 1;
            }else{
                return 2; 
            }
        }

        //Confere diagonal secundária.
        if(tabuleiro[0][2] != '-' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]){

            if(tabuleiro[0][2] == 'X'){
                return 1;
            }else{
                return 2; 
            }
        }

        return 0;
}

void jogo(){

    ///Variáveis Gerais.
    string nomeDoJogadorUm, nomeDoJogadorDois, nomeDoJogadorAtual;     //Nomes dos jogadores. 
    char tabuleiro[3][3];                          //Tabuleiro do jogo.
    int linha, coluna;                             //Auxiliares para tabuleiro.
    int linhaJogada, colunaJogada;                 //Posição em que o jjogador posiciona sua marca.
    int estadoDeJogo = 1;                          //0 = Sem jogo, 1 = Em jogo. 
    int turnoDoJogador = 1;                        //1 = X, 2 = O. 
    int rodada = 0;                                //Quantas vezes os jogadores jogaram no total. 
    int opcao;                                     //Opções de reinicio. 

    //Coloca os '-' no tabuleiro para indicar o vazio.
    iniciaTabuleiro(tabuleiro);

    cout << "\nDigite o nome do jogador 1: ";
    cin >> nomeDoJogadorUm;
    cout << "Digite o nome do jogador 2: ";
    cin >> nomeDoJogadorDois;

    while(rodada < 9 && estadoDeJogo == 1){

        limpaTela();

        //Exibe o tabuleiro na tela.
        exibeTabuleiro(tabuleiro);
        
        cout << "\nRodada: " << rodada << "\n";

        //Atualiza o nome do jogador atual.
        if(turnoDoJogador == 1){

            nomeDoJogadorAtual = nomeDoJogadorUm;

        }else{

            nomeDoJogadorAtual = nomeDoJogadorDois;

        }

        //Lê a posição desejada.
        cout << nomeDoJogadorAtual << ", digite uma linha: ";
        cin >> linhaJogada;
        cout << nomeDoJogadorAtual << ", digite uma coluna: ";
        cin >> colunaJogada;

        //Verifica de quem é a vez para posicionar o marcador.
        if(turnoDoJogador == 1){

            tabuleiro[linhaJogada][colunaJogada] = 'X';
            turnoDoJogador  = 2;

        }else{

            tabuleiro[linhaJogada][colunaJogada] = 'O';
            turnoDoJogador  = 1;

        }

        //Confere se o jogo acabou.
        if(confereTabuleiro(tabuleiro) == 1){
            cout << "\nO jogador X venceu!\n";
            estadoDeJogo = 0;
        }else if(confereTabuleiro(tabuleiro) == 2){
            cout << "\nO jogador O venceu!\n";
            estadoDeJogo = 0;
        }       
         

        //Aumenta uma rodada.
        rodada++;

    }

    exibeTabuleiro(tabuleiro);
    cout << "FIM DE JOGO!\n\n";
    cout << "\nDeseja reiniciar o jogo?\n";
    cout << "1 - Sim\n";
    cout << "2 - Não\n";
    cin >> opcao;

    if(opcao == 1){
        menuInicial();
    }else{
        cout << "\nATÉ MAIS!\n\n";
    }   

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