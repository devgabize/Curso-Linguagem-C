#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 37 - Considere um vetor A com 11 elementos onde A1 < A2 < · · · < A6 > A7 > A8 >
· · · > A11, ou seja, está ordenado em ordem crescente até o sexto elemento, e a partir
desse elemento está ordenado em ordem decrescente. Dado o vetor da questão anterior,
proponha um algoritmo para ordenar os elementos.*/

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
            if(i <= 5){
                if(vet[i] > vet[j]){;
                    aux = vet[i];
                    vet[i] = vet[j];
                    vet[j] = aux;
                }
            }else{
                if(vet[i] < vet[j]){;
                    aux = vet[i];
                    vet[i] = vet[j];
                    vet[j] = aux;
                }  
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