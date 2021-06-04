#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 04 - Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do
maior valor.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int mat[4][4], linMaior, colMaior;
    
    //Lendo a matriz.
    cout << "\nDIGITE OS VALORES DA MATRIZ:\n";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "Digite o valor: ";
            cin >> mat[i][j];
        }
    }

    //Inicializando com o primeiro valor da matriz.
    linMaior = 0;
    colMaior = 0;

    //Percorrendo a matriz para encontrar o maior valor e guardar sua localização.
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(mat[i][j] > mat[linMaior][colMaior]){
                linMaior = i;
                colMaior = j;
            }
        }
    }

    //Imprimindo a matriz e mostrando a localização do maior valor.
    cout << "\nMATRIZ DIGITADA:\n";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << mat[i][j] << "  ";
        }
        cout << "\n";
    }
    cout << "\n";

    cout << "\nO MAIOR VALOR ESTÁ:\n  LINHA: " << linMaior  << "\n  COLUNA: " << colMaior << "\n\n";

    return 0;
}