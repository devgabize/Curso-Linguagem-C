#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 20 - Faça programa que leia uma matriz 3 x 6 com valores reais.
        (a) Imprima a soma de todos os elementos das colunas ı́mpares.
        (b) Imprima a média aritmética dos elementos da segunda e quarta colunas.
        (c) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
        (d) Imprima a matriz modificada.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int mat[3][6], somaColunasImpares = 0;
    float somaParaMediaSegundaColuna = 0.0, somaParaMediaQuartaColuna = 0.0;

    cout << "\nDIGITE OS VALORES PARA A MATRIZ:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 6; j++){
            cout << "Digite o valor: ";
            cin >> mat[i][j];
        }
    }

    cout << "\nMTRIZ DIGITADA:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 6; j++){
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 6; j++){
            if((j % 2) != 0){
                somaColunasImpares += mat[i][j];
            }
            if(j == 1){
                somaParaMediaSegundaColuna += mat[i][j]; 
            }
            if(j == 3){
                somaParaMediaQuartaColuna += mat[i][j];
            }
            if(j == 5){
                mat[i][j] = mat[i][0] + mat[i][1]; 
            }
        }
    }

    cout << "\nSOMA ELEMENTOS COLUNAS ÍMPARES: " << somaColunasImpares;
    cout << "\nMÉDIA DOS ELEMENTOS DA SEGUNDA COLUNA: " << (somaParaMediaSegundaColuna / 3.0);
    cout << "\nMÉDIA DOS ELEMENTOS DA QUARTA COLUNA: " << (somaParaMediaQuartaColuna / 3.0);

    cout << "\nMTRIZ MODIFICADA:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 6; j++){
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";


    return 0;
}