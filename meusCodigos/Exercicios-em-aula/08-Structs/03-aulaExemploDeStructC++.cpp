#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<iostream>
#include<new>

using namespace std;

//Struct para frutas.
struct fruta{
    string cor;
    string nome;
};

int main(){

    //Criando um ponteiro para o struct criado.
    fruta *primeiraFruta = new fruta;

    //modificando valores.
    primeiraFruta->cor = "Amarela";
    primeiraFruta->nome = "Banana";

    //Exibindo valores.
    cout << "Fruta: " << primeiraFruta->nome << ", Cor: " << primeiraFruta->cor << "\n";

    //Criando uma lista de frutas.
    fruta *ponteiroListaDeFrutas = new fruta[2];

    //Modificando valores.
    ponteiroListaDeFrutas[0].cor = "Vermelho";
    ponteiroListaDeFrutas[0].nome = "Morango";
    ponteiroListaDeFrutas[1].cor = "Verde";
    ponteiroListaDeFrutas[1].nome = "kiwi";

    //Percorrendo e exibindo.
    for(int i = 0; i <2; i++){
       cout << "Fruta: " << ponteiroListaDeFrutas[i].nome << ", Cor: " << ponteiroListaDeFrutas[i].cor << "\n"; 
    }

    return 0;
}