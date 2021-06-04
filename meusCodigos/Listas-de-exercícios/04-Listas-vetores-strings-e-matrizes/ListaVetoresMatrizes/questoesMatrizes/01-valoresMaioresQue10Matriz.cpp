#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 01 - Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int mat[4][4], qtd = 0;

    //Lendo os valores da matriz.
    cout << "\nDIGITE VALORES PARA A MATRIZ:\n";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "Digite um valor: ";
            cin >> mat[i][j];
        }
    }

    //Percorrendo a matriz e verificando os valores maiores que 10.
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(mat[i][j] > 10){
                qtd++;
            }
        }
    }

    //Mostrando a qtd de valores maiores que 10 na matriz.
    cout << "\nA matriz possui " << qtd << " valor(es) maior(es) que 10.\n\n";
    return 0;
}