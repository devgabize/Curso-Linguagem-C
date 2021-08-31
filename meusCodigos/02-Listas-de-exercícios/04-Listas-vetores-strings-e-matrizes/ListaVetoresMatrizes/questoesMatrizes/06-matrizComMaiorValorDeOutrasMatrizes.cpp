#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 06 - Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição
das matrizes lidas.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int mat1[4][4], mat2[4][4], maior[4][4];

    //Lendo os valores das duas matrizes.
    cout << "\nDIGITE VALORES PARA A MATRIZ 1:\n";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "Digite o valor: ";
            cin >> mat1[i][j];
        }
    }
    cout << "\nDIGITE VALORES PARA A MATRIZ 2:\n";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "Digite o valor: ";
            cin >> mat2[i][j];
        }
    }

    //Escrevendo a terceira matriz com os maiores valores das duas matrizes.
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(mat1[i][j] > mat2[i][j]){
                maior[i][j] = mat1[i][j];
            }else{
                maior[i][j] = mat2[i][j];   
            }
        }
    }

    cout << "\nMATRIZ 1:\n";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << mat1[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    cout << "\nMATRIZ 2:\n";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << mat2[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    //Mostrando a terceira matriz criada.
    cout << "\nMATRIZ COM OS MAIORES VALORES:\n";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << maior[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    return 0;
}