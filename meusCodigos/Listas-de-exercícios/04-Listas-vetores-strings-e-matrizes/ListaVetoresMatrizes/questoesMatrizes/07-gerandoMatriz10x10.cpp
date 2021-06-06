#include<stdlib.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>
#include<math.h>

/*QUESTÃO 07 - Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da forma:
    A[i][j] = 2i + 7j − 2 se i < j;
    A[i][j] = 3i² − 1 se i = j;
    A[i][j] = 4i³ − 5j² + 1 se i > j.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float A[10][10];

    //Preenchendo a matriz com valores de acordo com as fórmulas.
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i < j){
                A[i][j] = 2 * i + 7 * j - 2;
            }else if(i == j){
                A[i][j] = 3 * pow(i, 2) - 1; 
            }else{
                A[i][j] = 4 * pow(i, 3) - 5 * pow(j, 2) + 1;
            }
        }
    }

    //Mostrando a matriz gerada na tela.
    cout << "\nMATRIZ GERADA:\n";
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    return 0;
}