#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 39 - Escreva um programa que leia um número inteiro positivo n e em seguida imprima n
linhas do chamado Triangulo de Pascal:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
...*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int n, coef = 0;

    //Lendo o número positivo n.
    cout << "\nDIGITE UM INTEIRO POSITIVO: ";
    cin >> n;

    //Preenchendo o triângulo.
    cout << "\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(i == 0 || j == 0){
                coef = 1;
            }else{
                coef = coef * (i - j + 1) / j;
            }
            cout << coef << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    return 0;
}