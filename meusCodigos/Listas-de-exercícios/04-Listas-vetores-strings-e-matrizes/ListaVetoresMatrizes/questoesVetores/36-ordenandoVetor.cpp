#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 36 - Leia um vetor com 10 números reais, ordene os elementos deste vetor, e no final escreva
os elementos do vetor ordenado.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float vet[10], aux;

    //Lendo os valores do vetor.
    cout << "\nDIGITE 10 VALORES:\n";
    for(int i = 0; i < 10; i++){
        cout << "Digite o valor: ";
        cin >> vet[i];
    }
    cout << "\nVETOR DIGITADO: { ";
    for(int i = 0; i < 10; i++){
        cout << vet[i] << " ";
    }
    cout << "}\n\n";

    //Ordenando vetor.
    for(int i = 0; i < 10; i++){
        for(int j = i; j < 10; j++){
            if(vet[i] > vet[j]){;
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    cout << "\nVETOR ORDENADO: { ";
    for(int i = 0; i < 10; i++){
        cout << vet[i] << " ";
    }
    cout << "}\n\n";
    return 0;
}