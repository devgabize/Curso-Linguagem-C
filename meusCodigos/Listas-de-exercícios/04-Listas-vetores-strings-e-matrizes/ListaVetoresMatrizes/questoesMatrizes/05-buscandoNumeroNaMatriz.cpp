#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 05 - Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma busca
desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensa-
gem de “não encontrado”.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float mat[5][5], x, linNum[5], colNum[5];
    int qtd = 0;

    //Lendo os valores da mmatriz e o valor x para ser buscado.
    cout << "\nDIGITE OS VALORES DA MATRIZ:\n";
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << "Digite o valor: ";
            cin >> mat[i][j];
        }
    }

    cout << "\nDIGITE UM VALOR PARA SER BUSCADO NA MATRIZ: ";
    cin >> x;

    //Percorrendo a matriz em busca do valor x.
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(x == mat[i][j]){
                linNum[qtd] = i;
                colNum[qtd] = j;
                qtd++;
            }
        }
    }

    //Mostrando os valores encontrados e a sua localização.
    if(qtd != 0){
        cout << "\nFoi encontrado " << qtd << " valor(es) na matriz:\nLocalização:\n";
        for(int i = 0; i < qtd; i++){
            cout << (i + 1) << "° valor: \n" << "  Linha: " << linNum[i] << "\n  Coluna: " << colNum[i] << "\n"; 
        }
    }else{
        cout << "\n## VALOR NÃO ENCONTRADO NA MATRIZ! ##\n";
    }
    cout << "\n";

    return 0;
}