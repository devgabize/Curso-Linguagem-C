#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 11 - Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diago-
nal secundária.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int mat[3][3], soma = 0;

    //Lendo os valores da matriz.
    cout << "\nDIGITE OS VALORES DA MATRIZ:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Digite um valor:";
            cin >> mat[i][j];
        }
    }

    //Realizando a soma dos elementos da diagonal secundária.
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j == (2 - i)){
                soma += mat[i][j];
            }
        }
        cout << "\n";
    }

    //Mostrando resultado da soma.
    cout << "\nSOMA DOS ELEMENTOS DA DIAGONAL SECUNDÁRIA: " << soma << "\n\n";
    
    return 0;
}