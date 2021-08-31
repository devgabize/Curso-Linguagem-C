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
    string palavras[3] = {"abacaxi", "manga", "morango"};

    //Indice gerado no intervalo {0, 1, 2}.
    int indiceAleatorio = rand() % 3;

    return palavras[indiceAleatorio];
}

string retornaPalavraComMascara(string palavra, int tamanhoDaPalavra){

    int cont = 0;
    string palavraComMascara;

    while(cont < tamanhoDaPalavra){
        palavraComMascara += "_";
        cont++;
    }

    return palavraComMascara;

}

void exibeStatus(string palavraComMascara, int tamanhoDaPalavra, int tentativasRestantes, string letrasJaArriscadas, string mensagem){

    cout << "\n" << mensagem;
    cout << "\nPalavra: " << palavraComMascara << " (Tamanho: " << tamanhoDaPalavra << ")\n";
    cout << "Tentativas restantes: " << tentativasRestantes << "\n";
    
    //Exibe as letras arriscadas.
    int cont;
    cout << "Letras arriscadas: ";
    for(cont = 0; cont < letrasJaArriscadas.size(); cont++){

        cout << letrasJaArriscadas[cont] << ", ";
    }

}

int jogarSozinho(){

    //Palavra a ser advinhada.
    string palavra = retornaPalavraAleatoria();

    //Tamanho da palavra.
    int tamanhoDaPalavra = palavra.size();

    //Palavra mascarada.
    string palavraComMascara = retornaPalavraComMascara(palavra, tamanhoDaPalavra);

    ///Variáveis Gerais.
    int tentativas = 0, maximoDeTentativas = 10;    //número de tentativas e erros.
    int cont = 0;                                  //Auxiliar para laços de repetição.
    char letra;                                    //Letra arriscada pelo usuário.
    int opcao;                                     //Opções finais. 
    string letrasJaArriscadas;                     //Acumula as tentativas do jogador.
    string mensagem = "Bem vindo ao jogo!";        //Feedback do jogador.
    bool jaDigitouLetra = false;                   //Auxiliar para saber se a letra já foi digitada.

    while(palavra != palavraComMascara && maximoDeTentativas - tentativas > 0){

        limpaTela();

        //Exibe o status atual do jogo.
        exibeStatus(palavraComMascara, tamanhoDaPalavra, maximoDeTentativas - tentativas, letrasJaArriscadas, mensagem);

        //Lê um palpite.
        cout << "\nDigite uma letra: ";
        cin >> letra;

        //Percorre as letras arriscadas
        for(cont = 0; cont < tentativas; cont++){

            //Se encontrar a letra. 
            if(letrasJaArriscadas[cont] == letra){
                
                mensagem =  "Essa letra já foi digitada!";

                //Indica com a variável booleana.
                jaDigitouLetra = true;

            }
        }

        //Se for uma letra nova.
        if(jaDigitouLetra == false){

            mensagem =  "Você acertou uma letra!";

            //Incrementa as letras já arriscadas.
            letrasJaArriscadas += tolower(letra);           //tolower: Transforma em minúscula.

            //Percorre a palavra real e 
            for(cont = 0; cont < tamanhoDaPalavra; cont++){

                //se a letra existir na palavra escondida.
                if(palavra[cont] == tolower(letra)){        //tolower: Transforma em minúscula.
                    
                    //Faço aquela letra aparecer na palavraComMascara.
                    palavraComMascara[cont] = palavra[cont];

                }
            }

            //Aumenta uma tentativa realizada.
            tentativas++;

        }

        //Reseta a variável jaDigitouLetra.
        jaDigitouLetra = false;

    }
    cout << "\n";

    if(palavra == palavraComMascara){
       
        limpaTela();
        cout << "\n-----Parabéns, você venceu!-----\n";
        cout << "\nDeseja reiniciar?\n";
        cout << "1 - Sim\n";
        cout << "2 - Não\n";
        cin >> opcao;
        return opcao;

    }else{

        limpaTela();
        cout << "\n-----Ops! você perdeu!-----\n";
        cout << "\nDeseja reiniciar?\n";
        cout << "1 - Sim\n";
        cout << "2 - Não\n";
        cin >> opcao;
        return opcao;

    }
    
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
                if(jogarSozinho() == 1){
                    menuInicial();
                }else{
                    //Finaliza o jogo.
                    cout << "\nATÉ MAIS!\n\n";
                }
                break;

            case 2:
                //Exibe informações do jogo.
                limpaTela();
                cout << "\nInformações do jogo:\n";
                cout << "\nJogo desenvolvido por Gabizê em 31/08/2021.\n\n";
                cout << "1 - Voltar\n";
                cout << "2 - Sair\n";
                cin >> opcao;

                if(opcao == 1){
                    menuInicial();
                }else{
                    //Finaliza o jogo.
                    cout << "\nATÉ MAIS!\n\n";
                }
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