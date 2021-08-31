#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 12 - Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int mat[3][3], trans[3][3];

    //Lendo os valores da matriz.
    cout << "\nDIGITE OS VALORES DA MATRIZ:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Digite um valor: ";
            cin >> mat[i][j];
        }
    }

    //Calculando a transposta.
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            trans[j][i] = mat[i][j];
        }
    }

    cout << "\nMATRIZ DIGITADA:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << mat[i][j] << "  ";
        }
        cout << "\n";
    }
    cout << "\n";

    //Mostrando matriz transposta na tela.
    cout << "\nMATRIZ TRANSPOSTA:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << trans[i][j] << "  ";
        }
        cout << "\n";
    }
    cout << "\n";
    
    return 0;
}