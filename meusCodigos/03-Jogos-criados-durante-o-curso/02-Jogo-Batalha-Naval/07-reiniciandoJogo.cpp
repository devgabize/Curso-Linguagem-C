#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<time.h>

using namespace std;

//Cabeçalhos de funções.
void menuInicial();

void limpaTela(){
    system("clear");
}

void iniciaTabuleiro(char tabuleiro[10][10], char mascara[10][10]){

    //Popula o tabuleiro com água.
    int linha, coluna;
    for(linha = 0; linha < 10; linha++){
        for(coluna = 0; coluna < 10; coluna++){
            tabuleiro[linha][coluna] = 'A';
            mascara[linha][coluna] = '*';
        }
    }

}

void exibeTabuleiro(char tabuleiro[10][10], char mascara[10][10]){
    
    //Exibe o tabuleiro.
    int linha, coluna; 
    for(linha = 0; linha < 10; linha++){
        for(coluna = 0; coluna < 10; coluna++){
           cout << mascara[linha][coluna] << " ";
        }
        cout << "\n";
    }  
    cout << "\n";

    cout << "\n";
    for(linha = 0; linha < 10; linha++){
        for(coluna = 0; coluna < 10; coluna++){
           cout << tabuleiro[linha][coluna] << " ";
        }
        cout << "\n";
    }  
    cout << "\n";

}

void posicionaBarcos(char tabuleiro[10][10]){

    //Coloca 10 barcos no tabuleiro.
    int cont, quantidade = 10, linhaAleatoria, colunaAleatoria, quantidadePosicionada = 0;

    //Verifica se já posicionou todos os barcos.
    while(quantidadePosicionada < quantidade){

        linhaAleatoria = rand() % 10;           //Gera número aleatório de 0 a 9.
        colunaAleatoria = rand() % 10;          //Gera número aleatório de 0 a 9.

        if(tabuleiro[linhaAleatoria][colunaAleatoria] == 'A'){

            //Posiciona 10 barcos aleatoriamente.
            tabuleiro[linhaAleatoria][colunaAleatoria] = 'P';

            //Aumenta o contador de barcos posicionados.
            quantidadePosicionada++;
            
        }
        
    }

}

void verificaTiro(char tabuleiro[10][10], int linhaJogada, int colunaJogada, int *pontos, string *mensagem){

    //Verifica quantos pontos adicionar.
        switch(tabuleiro[linhaJogada][colunaJogada]){
            case 'P':
                *pontos = *pontos + 10;
                *mensagem = "Você acertou um barco pequeno! (10 pts)";
                break;

            case 'A':
                *mensagem = "Você acertou a água!";
                break;

        }
}

void jogo(){
    
    ///Variáveis Gerais.
    char tabuleiro[10][10], mascara[10][10];       //Tabuleiro do jogo.
    int linha, coluna;                             //Auxiliares de navegação. 
    int linhaJogada, colunaJogada;                 //Posição escolhida pelo Jogador.
    int estadoDeJogo = 1;                          //1 = Jogo acontecendo, 0 = Fim de jogo. 
    int pontos = 0;                                //Pontuação do jogo. 
    int tentativas = 0, maximoDeTentativas = 5;    //Tentativas do jogador.       
    int opcao;                                     //Opções de fim de jogo.   
    string mensagem = "Bem-vindo ao jogo!";        //Mensagem de feedback para o jogador. 

    //Inicia o tabuleiro com água.
    iniciaTabuleiro(tabuleiro, mascara);    

    //Posiciona barcos aleatoriamente.
    posicionaBarcos(tabuleiro);

    while(tentativas < maximoDeTentativas){

        limpaTela();

        //Exibe tabuleiro.
        exibeTabuleiro(tabuleiro, mascara);

        cout << "\nPONTOS: " << pontos << ", Tentativas Restantes: " << maximoDeTentativas - tentativas;
        cout << "\n" << mensagem;
        cout << "\nDigite uma linha: ";
        cin >> linhaJogada;
        cout << "\nDigite uma coluna: ";
        cin >> colunaJogada;

        verificaTiro(tabuleiro, linhaJogada, colunaJogada, &pontos, &mensagem);

        //Revela o que está no tabuleiro.
        mascara[linhaJogada][colunaJogada] = tabuleiro[linhaJogada][colunaJogada];

        tentativas++;
    }

    cout << "\nPONTUAÇÃO FINAL: " << pontos << "\n";
    cout << "\nFim de jogo, o que deseja fazer?\n";
    cout << "1 - Jogar novamente\n";
    cout << "2 - Ir para o menu\n";
    cout << "3 - Sair\n";
    cin >> opcao;

    switch(opcao){
        case 1:
            jogo();
            break;
        
        case 2:
            menuInicial();
            break;

        default:
            //Finaliza o jogo.
            cout << "\nATÉ MAIS!\n";
            break;
    }
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

    //Para gerar números realmente aleatórios.
    srand((unsigned)time(NULL));

    menuInicial();

    return 0;
}