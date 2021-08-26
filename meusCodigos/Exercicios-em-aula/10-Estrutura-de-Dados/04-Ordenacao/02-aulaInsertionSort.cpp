#include<iostream>
#include<stdlib.h>
#include<string>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[]){
    int i;
    cout << "\n";
    for(i = 0; i < TAM; i++){
        cout << " |" << vetor[i] << "| ";
    }
    cout << "\n\n";
}

void insertion_sort(int vetor[TAM]){
    int i, j, atual;

    for(i = 1; i < TAM; i++){
        //Elemento atual em análise.
        atual = vetor[i];

        //Elemento anterior ao anlaisado;
        j = i - 1;

        //Analisando membros anteriores.
        while((j >= 0) && (atual < vetor[j])){

            vetor[j + 1] = vetor[j];

            //Faz o j andar para trás.
            j = j - 1;

        }

        //Agora que o espaço foi aberto, colocamos o atual (menor número) na posição correta.
        vetor[j + 1] = atual;

        imprimeVetor(vetor);
    }
}

int main(){

    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
    
    insertion_sort(vetor);

    imprimeVetor(vetor);

    return 0;
}