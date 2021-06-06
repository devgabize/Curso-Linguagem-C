#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>
#include<time.h> //Para gerar números aleatórios.

/*QUESTÃO 13 - Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme
a matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos acima da diagonal principal. Imprima a matriz original e a matriz transformada.*/

using namespace std;

int main (){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //para alimentar o rand.
    srand((unsigned)time(NULL));

    //Definindo variáveis.
    int mat[4][4];

    //Gerando a matriz com valores dentro do intervalo [1, 20].;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            mat[i][j] = 1 + (rand() % 20);        
        }
    }

    //Imprimindo matriz gerada.
    cout << "\nMATRIZ GERADA:\n";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << mat[i][j] << "  ";
        }
        cout << "\n";
    }
    cout << "\n";

    //Transformando a matriz gerada em uma matriz triangular inferior.
    for(int i = 0; i < 4; i++){
        for(int j = (i + 1); j < 4; j++){
            mat[i][j] = 0;
        }
    }

    //Imprimindo matriz transformada.
    cout << "\nMATRIZ TRANSFORMADA:\n";
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << mat[i][j] << "  ";
        }
        cout << "\n";
    }
    cout << "\n";

    return 0;
}