#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<time.h>

using namespace std;

void limpaTela(){
    system("clear");
}

string retornaPalavraAleatoria(){

    //Vetor com palavras disponíveis.
    string palavras[3] = {"Abacaxi", "Manga", "Morango"};

    //Indice gerado no intervalo {0, 1, 2}.
    int indiceAleatorio = rand() % 3;

    return palavras[indiceAleatorio];
}

string retornaPalavraComMascara(string palavra, int tamanhoDaPalavra){

    int cont = 0;
    string palavraComMascara;

    while(cont < tamanhoDaPalavra){
        palavraComMascara += "_ ";
        cont++;
    }

    return palavraComMascara;

}

void jogarSozinho(){

    //Palavra a ser advinhada.
    string palavra = retornaPalavraAleatoria();

    //Tamanho da palavra.
    int tamanhoDaPalavra = palavra.size();

    //Palavra mascarada.
    string palavraComMascara = retornaPalavraComMascara(palavra, tamanhoDaPalavra);

    cout << "A palavra secreta é: " << palavra << " (Tamanho: " << tamanhoDaPalavra << ")\n";
    cout << "\nMascara: " << palavraComMascara << "\n\n";    
}

void menuInicial(){

    //Opção escolhida pelo usuário.
    int opcao = 0;

    //Enquanto o jogador não digita uma opção válida, mostra o menu novamente.
    while(opcao < 1 || opcao > 3){

        limpaTela();
        
        cout << "\nBEM-VINDO AO JOGO!\n";
        cout << "1 - Jogar\n";
        cout << "2 - Sobre\n";
        cout << "3 - Sair\n";
        cout << "Escolha uma opcao e tecle ENTER: ";

        //Faz a leitura da opção.
        cin >> opcao;

        //Faz algo de acordo com a opção escolhida.
        switch(opcao){
            case 1:
                //Inicia o jogo.
                cout << "\nJogo iniciado!\n\n";
                jogarSozinho();
                break;
            case 2:
                //Exibe informações do jogo.
                cout << "\nInformações do jogo:\n";
                break;
            case 3:
                //Finaliza o jogo.
                cout << "\nATÉ MAIS!\n\n";
                break;
        }
    }
}

int main(){

    //Para gerar números aleatórios.
    srand((unsigned)time(NULL));

    menuInicial();

    return 0;
}