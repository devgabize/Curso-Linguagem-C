#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
//1º modo de criar e acessar strings em c++.
/*
int main(){
    std::string palavra;

    printf("Digite uma palavra: ");

    std::cin >> palavra;

    std::cout << palavra;
    //printf("\n");

    return 0;
}*/

//2º modo de criar e acessar strings em c++.
using namespace std;

int main(){
    //Definindo uma String.
    string palavra;

    //Imprimindo na tela.
    cout << "Digite uma palavra:";

    //Lendo uma string.
    cin >> palavra;

    //Imprimindo uma variável.
    cout << "A palavra eh: " << palavra;
    printf("\n");

    return 0;
}