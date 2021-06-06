#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 09 - Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão abaixo da
diagonal principal.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int mat[3][3], soma = 0;

    //Lendo os valores da matriz.
    cout << "\nDIGITE OS VALORES PARA A MATRIZ:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Digite o valor: ";
            cin >> mat[i][j];
        }
    }

    //Calculando a soma dos elementos acima da diagonal principal.
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j) {
                soma += mat[i][j];
            }
        }
    }
 
    //Mostrando na tela o resultado da soma.
   cout << "\nSOMA DOS ELEMENTOS ABAIXO DA DIAGONAL PRINCIPAL: " << soma << "\n\n";
    
    return 0;
}