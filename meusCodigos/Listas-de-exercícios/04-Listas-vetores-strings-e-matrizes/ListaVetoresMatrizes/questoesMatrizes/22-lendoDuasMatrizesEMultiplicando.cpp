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

    int k = 0, col = 0, ctrl = 0, aux = 0;
    while(k < 3){
        int l = 0;
        while(l < 3){
            C[k][col] += A[k][l]*B[l][cont];
            cout << "\n" << A[k][l] << " * " << B[l][cont] << " = " << C[k][col] << " ---> cont = " << cont << " col = " << col << " k = " << k << " l = " << l << "\n";
            l++;
        }
        cont++;
        col++;
        if(cont > 2){
            k++;
            cont = 0;
        }
        if(col > 2){
            col = 0;
        }
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