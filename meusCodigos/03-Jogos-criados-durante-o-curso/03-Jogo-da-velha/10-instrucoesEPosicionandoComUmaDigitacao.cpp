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

void exibeInstrucoes(){

    cout << "\nMAPA DE POSIÇÕES:\n";
    cout << " 7 | 8 | 9\n";
    cout << " 4 | 5 | 6\n";
    cout << " 1 | 2 | 3\n";

}

void jogo(){

    ///Variáveis Gerais.
    string nomeDoJogadorUm, nomeDoJogadorDois, nomeDoJogadorAtual;     //Nomes dos jogadores. 
    char tabuleiro[3][3];                                              //Tabuleiro do jogo.
    int linha, coluna;                                                 //Auxiliares para tabuleiro.
    int linhaJogada, colunaJogada, posicaoJogada;                      //Posição em que o jjogador posiciona sua marca.
    int estadoDeJogo = 1;                                              //0 = Sem jogo, 1 = Em jogo. 
    int turnoDoJogador = 1;                                            //1 = X, 2 = O. 
    int rodada = 0;                                                    //Quantas vezes os jogadores jogaram no total. 
    int opcao;                                                         //Opções de reinicio. 
    bool posicionouJogada;                                     //Verifica se o jogador colocou um marcador no tabuleiro. 

    //Coloca os '-' no tabuleiro para indicar o vazio.
    iniciaTabuleiro(tabuleiro);

    cout << "\nDigite o nome do jogador 1: ";
    cin >> nomeDoJogadorUm;
    cout << "Digite o nome do jogador 2: ";
    cin >> nomeDoJogadorDois;

    //Matriz de posições possiveis.
    int posicoes[9][2] = {{2,0}, {2,1}, {2,2}, {1,0}, {1,1}, {1,2},{0,0}, {0,1}, {0,2}};

    while(rodada < 9 && estadoDeJogo == 1){

        limpaTela();

        //Exibe o tabuleiro na tela.
        exibeTabuleiro(tabuleiro);

        //Exibe qual número corresponde a qual posição.
        exibeInstrucoes();
        
        cout << "\nRodada: " << rodada << "\n";

        //Atualiza o nome do jogador atual.
        if(turnoDoJogador == 1){

            nomeDoJogadorAtual = nomeDoJogadorUm;

        }else{

            nomeDoJogadorAtual = nomeDoJogadorDois;

        }

        posicionouJogada = false;

        while(posicionouJogada == false){

            cout << nomeDoJogadorAtual << "\nDigite uma posicao conforme o mapa acima: ";
            cin >> posicaoJogada;

            //Passa a linha e coluna de acordo com a matriz de posições exibidas no mapa.
            linhaJogada = posicoes[posicaoJogada - 1][0];
            colunaJogada = posicoes[posicaoJogada - 1][1];

            //Verifica se a posição é vazia!
            if(tabuleiro[linhaJogada][colunaJogada] == '-'){

                //Conseguiu posicionar um marcador.
                posicionouJogada = true;

                //Verifica de quem é a vez para posicionar o marcador.
                if(turnoDoJogador == 1){

                    tabuleiro[linhaJogada][colunaJogada] = 'X';
                    turnoDoJogador  = 2;

                }else{

                    tabuleiro[linhaJogada][colunaJogada] = 'O';
                    turnoDoJogador  = 1;

                }

            }

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