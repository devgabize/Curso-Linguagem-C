#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 22 - Faça um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C = A ∗ B.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int A[3][3], B[3][3], C[3][3], cont = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            C[i][j] = 0;
        }
    }

    cout << "\nDIGITE OS VALORES DAS MATRIZES A E B:\n";
    cout << "VALORES MATRIZ A:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Digite um valor: ";
            cin >> A[i][j];
        }
    }
    cout << "VALORES MATRIZ B:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Digite um valor: ";
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j < 2){
                C[i][cont] += A[i][j] * B[j][i];
            }else if(j == 2 && cont < 2){
                C[i][cont] += A[i][j] * B[j][i]; 
                cont++;
                j = 1; 
            }else if(j == 2 && cont == 2){
                C[i][cont] += A[i][j] * B[j][i]; 
                cont++;
                j = 2; 
            }
        }
        cont = 0;
    }

    cout << "\nMATRIZ PRODUTO:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(C[i][j] < 10){
                cout << " " << C[i][j] << " ";
            }else{
                cout << C[i][j] << " ";
            }            
        }
        cout << "\n";
    }
    cout << "\n";

    return 0;
}