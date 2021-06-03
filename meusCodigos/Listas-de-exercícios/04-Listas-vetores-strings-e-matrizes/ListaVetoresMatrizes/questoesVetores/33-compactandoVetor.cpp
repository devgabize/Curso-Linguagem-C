#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 33 - *Faça um programa que leia um vetor de 15 posições e o compacte, ou seja, elimine as
posições com valor zero. Para isso, todos os elementos à frente do valor zero, devem ser
movidos uma posição para trás no vetor.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int vet[15], cont = 0;

    //Lendo os valores do vetor.
    cout << "\nDIGITE 15 VALORES PARA O VETOR:\n";
    for(int i = 0; i < 15; i++){
        cout << "Digite o valor: ";
        cin >> vet[i];
    }

    //Verificando as posições que possuem valor 0 (zero).
    for(int i = 0; i < 15; i++){
        if(vet[i] == 0){
            vet[i] = vet[i + 1];
            cont++;
            for(int j = i + 1; j < 15; j++){
                vet[j] = vet[j + 1];
            }
        }
    }

    //Mostrando vetor modificado.
    cout << "\nVETOR MODIFICADO: { ";
    for(int i = 0; i < (15 - cont); i++){
        cout << vet[i] << " ";
    }
    cout << "}\n\n";

    return 0;
}
