#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 19 - Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i + 5 ∗ i)%(i + 1), sendo
i a posição do elemento no vetor. Em seguida imprima o vetor na tela.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float vet[50];

    //Preenchendo vetor de acordo com a fórmula.
    for(int i = 0; i < 50; i++){
        vet[i] = (i + 5 * i) % (i + 1);
    }

    //Imprimindo vetor.
    cout << "VETOR PREENCHIDO: { ";
    for(int i = 0; i < 50; i++){
        cout << vet[i] << " ";
    }
    cout << "}\n\n";
    
    return 0;
}