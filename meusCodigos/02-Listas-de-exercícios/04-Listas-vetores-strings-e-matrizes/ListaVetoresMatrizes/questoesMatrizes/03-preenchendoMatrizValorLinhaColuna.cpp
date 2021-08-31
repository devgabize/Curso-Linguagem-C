#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 03 - Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da
coluna de cada elemento. Em seguida, imprima na tela a matriz.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int mat[4][4];

    //Preenchendo matriz.
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            mat[i][j] = i * j;
        }
    }

    //Mostrando matriz preenchida.
    cout << "\nMATRIZ GERADA:\n";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    return 0;
}