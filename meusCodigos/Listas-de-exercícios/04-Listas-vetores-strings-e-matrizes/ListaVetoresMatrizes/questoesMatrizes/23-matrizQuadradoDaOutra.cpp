#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>
#include<math.h>

/*QUESTÃO 22 - Faça um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C = A ∗ B.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int A[3][3], B[3][3];

    cout << "\nDIGITE OS VALORES DAS MATRIZES A:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Digite um valor: ";
            cin >> A[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            B[i][j] = pow(A[i][j], 2);
        }
    }

    cout << "\nMATRIZ GERADA B:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << B[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}