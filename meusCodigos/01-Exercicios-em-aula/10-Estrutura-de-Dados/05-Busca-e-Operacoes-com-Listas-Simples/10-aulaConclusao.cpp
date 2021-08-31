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

void adcFimSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista, string nome, int rg){

    //Cria uma lista com u tamanho maior.
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista + 1];

    //Passa os elementos do vetor antigo para o novo.
    int cont;

    for(cont = 0; cont < *tamanhoDaLista; cont++){
        novaListaSequencial[cont].nome = ponteiroSequencial[cont].nome;
        novaListaSequencial[cont].rg = ponteiroSequencial[cont].rg;
    } 

    //Posiciona o último elemento.
    novaListaSequencial[*tamanhoDaLista].nome = nome;
    novaListaSequencial[*tamanhoDaLista].rg = rg;

    //Atualiza o ponteiro para a lista nova.
    ponteiroSequencial = novaListaSequencial;

    //Aumenta o tamanho da lista.
    *tamanhoDaLista = *tamanhoDaLista + 1;

}

void adcPosicaoSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista, string nome, int rg, int posicao){
    //Cria uma lista com u tamanho maior.
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista + 1];

    //Passa os elementos do vetor antigo para o novo.
    int cont;

    for(cont = 0; cont < posicao; cont++){
        novaListaSequencial[cont].nome = ponteiroSequencial[cont].nome;
        novaListaSequencial[cont].rg = ponteiroSequencial[cont].rg;
    }

    //Adiciona o novo registro na posicao correta.
    novaListaSequencial[posicao].nome = nome;
    novaListaSequencial[posicao].rg = rg;

    //Coloca o resto dos valores antigos.
    for(cont = posicao + 1; cont < *tamanhoDaLista + 1; cont++){
        novaListaSequencial[cont].nome = ponteiroSequencial[cont - 1].nome;
        novaListaSequencial[cont].rg = ponteiroSequencial[cont - 1].rg;
    }

    //Atualiza o ponteiro para a lista nova.
    ponteiroSequencial = novaListaSequencial;

    //Aumenta o tamanho da lista.
    *tamanhoDaLista = *tamanhoDaLista + 1;
}

//*& - Ponteiro global para retornar o valor para ele.
void removeInicioSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista){

    //Cria um vetor com uma posição a menos.
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista - 1];

    //Passa os elementos do vetor antigo para o novo.
    int cont;

    for(cont = 1; cont < *tamanhoDaLista; cont++){
        novaListaSequencial[cont - 1].nome = ponteiroSequencial[cont].nome;
        novaListaSequencial[cont - 1].rg = ponteiroSequencial[cont].rg;
    }

    //Atualiza o ponteiro para a lista nova.
    ponteiroSequencial = novaListaSequencial;

    //Reduz o tamanho da lista.
    *tamanhoDaLista = *tamanhoDaLista - 1;
}

void removeFimSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista){

    //Cria um vetor com uma posição a menos.
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista - 1];

    //Passa os elementos do vetor antigo para o novo, menos o último.
    int cont;
    for(cont = 0; cont < *tamanhoDaLista - 1; cont++){
        novaListaSequencial[cont].nome = ponteiroSequencial[cont].nome;
        novaListaSequencial[cont].rg = ponteiroSequencial[cont].rg;
    }

    //Atualiza o ponteiro para a lista nova.
    ponteiroSequencial = novaListaSequencial;

    //Reduz o tamanho da lista.
    *tamanhoDaLista = *tamanhoDaLista - 1;
}

void removePosicaoSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista, int posicao){
   
    //Cria um vetor com uma posição a menos.
    pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista - 1];

    //Passa os valores dde acordo com o contador.
    int cont;
    for(cont = 0; cont < *tamanhoDaLista - 1; cont++){
        if(cont < posicao){
            ///Se estiver antes da posição, passa normalmente.
            novaListaSequencial[cont].nome = ponteiroSequencial[cont].nome;
            novaListaSequencial[cont].rg = ponteiroSequencial[cont].rg;
        }else{
            //Se estiver depois da posição, passa o próximo e pula o da posição.
            novaListaSequencial[cont].nome = ponteiroSequencial[cont + 1].nome;
            novaListaSequencial[cont].rg = ponteiroSequencial[cont + 1].rg;
        }
    }

    //Atualiza o ponteiro para a lista nova.
    ponteiroSequencial = novaListaSequencial;

    //Reduz o tamanho da lista.
    *tamanhoDaLista = *tamanhoDaLista - 1;

}

string retornaNomeSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista, int rg){

    string nome = "Não Encontrado!";

    //Busca pelo nome com o rg digitado.
    int cont;
    for(cont = 0; cont < *tamanhoDaLista; cont++){

        if(ponteiroSequencial[cont].rg == rg){
            nome = ponteiroSequencial[cont].nome;
        }
    }  

    return nome;

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
    while(funcaoDesejada < 9 && funcaoDesejada > 0){

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
        int rg, posicao;

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
                cout << "Funcao escolhida: 2 - Insercao de um node no fim da lista\n";

                cout << "Digite um nome: ";
                cin >> nome;
                cout << "Digite um RG: ";
                cin >> rg;

                //Se a lista for vazia, usamos a função de criar no inicio.
                if(tamanhoDaLista == 0){
                    adcComecoSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg);
                }else{
                    adcFimSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg);
                }
                break;
            
            case 3:
                cout << "Funcao escolhida: 3 - Insercao de um node na posicao N\n"; 

                cout << "Digite uma posicao: ";
                cin >> posicao;

                cout << "Digite um nome: ";
                cin >> nome;
                cout << "Digite um RG: ";
                cin >> rg; 

                if(posicao == 0){
                    //Se estiver adicionando no começo.
                    adcComecoSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg);
                }else if(posicao == tamanhoDaLista){
                    //Quando quer adicionar ao fim.
                    adcFimSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg);
                }else{
                    //Adiciona numa posição específica.
                    adcPosicaoSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg, posicao); 
                }

                break; 

            case 4:
                cout << "Funcao escolhida: 4 - Retirar um node do inicio da lista\n";

                //Se a lista for vazia.
                if(tamanhoDaLista == 0){
                    cout << "\nLista Vazia!\n";
                }else{
                    removeInicioSequencial(ponteiroSequencial, &tamanhoDaLista);
                }
                break;

            case 5:
                cout << "Funcao escolhida: 5 - Retirar um node no fim da lista\n";

                //Se a lista for vazia.
                if(tamanhoDaLista == 0){
                    cout << "\nLista Vazia!\n";
                }else{
                    removeFimSequencial(ponteiroSequencial, &tamanhoDaLista);
                }
                break;

            case 6:
                cout << "Funcao escolhida: 6 - Retirar um node na posicao N\n";

                //Se a lista for vazia.
                if(tamanhoDaLista == 0){
                    cout << "\nLista Vazia!\n";
                }else{
                    cout << "Digite uma posicao: ";
                    cin >> posicao;

                    if(posicao == 0){
                        removeInicioSequencial(ponteiroSequencial, &tamanhoDaLista);
                    }else if(posicao == tamanhoDaLista - 1){
                        removeFimSequencial(ponteiroSequencial, &tamanhoDaLista);
                    }else{
                        removePosicaoSequencial(ponteiroSequencial, &tamanhoDaLista, posicao);
                    }
                }
                break;

            case 7:
                cout << "Funcao escolhida: 7 - Procurar um node com o campo RG\n";

                //Se a lista for vazia.
                if(tamanhoDaLista == 0){
                    cout << "\nLista Vazia!\n";
                }else{
                    cout << "Digite um rg: ";
                    cin >> rg;

                    cout << "\nNome do rg " << rg << ": " << retornaNomeSequencial(ponteiroSequencial, &tamanhoDaLista, rg) << "\n\n";
                }
                break;

            case 8:
                //Imprime a lista completa.
                imprimeSequencial(ponteiroSequencial, tamanhoDaLista);
                break;
        }
    }

}