#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 02 - Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int mat[5][5];

    //Preenchendo matriz.
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == j){
                mat[i][j] = 1;
            }else{
                mat[i][j] = 0;
            }
        }
    }

    //Mostrando na tela matriz preenchida.
    cout << "\nMATRIZ GERADA:\n";
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}