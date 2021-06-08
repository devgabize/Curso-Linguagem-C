#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 18 - Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3 números
inteiros. Em seguida, gere um array unidimensional pela soma dos números de cada coluna da matriz e mostrar na tela esse array. Por exemplo, a matriz:
5 -8 10
1 2 15
25 10 7
Vai gerar um vetor, onde cada posição é a soma das colunas da matriz. A primeira
posição será 5 + 1 + 25, e assim por diante:
31 4 32*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int mat[3][3], somaColunas[3];

    //Zerando cada posição do vetor somaColunas para não entrar valores indesejados.
    for(int i = 0; i < 3; i++){
        somaColunas[i] = 0;
    }

    //Lendo matriz do usuário.
    cout << "\nDIGITE OS VALORES DA MATRIZ:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Digite o valor: ";
            cin >> mat[i][j];
        }
    }

    //Soma dos valores da coluna da matriz.
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            somaColunas[i] += mat[j][i];
        }
    }
    

    cout << "\nVETOR SOMA DAS COLUNAS: { ";
    for(int i = 0; i < 3; i++){
        cout << somaColunas[i] << " ";
    }
    cout << "}\n\n";

    return 0;
}