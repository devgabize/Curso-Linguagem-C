#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 38 - Peça ao usuário para digitar dez valores numéricos e ordene por ordem crescente esses
valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. Mostre ao
final na tela os valores em ordem.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float vet[10], aux;
    int cont = 0;

    //Lendo os valores do vetor.
    cout << "\nDIGITE 10 VALORES:\n";
    for(int i = 0; i < 10; i++){
        cout << "Digite o valor: ";
        cin >> vet[i];
        if(i > 0){            
            for(int j = 0; j < cont; j++){
                if(vet[i] < vet[j]){;
                    aux = vet[i];
                    vet[i] = vet[j];
                    vet[j] = aux;
                }
            }
        }
        cont++;
    }
    cout << "\nVETOR DIGITADO (ordenado): { ";
    for(int i = 0; i < 10; i++){
        cout << vet[i] << " ";
    }
    cout << "}\n\n";

    return 0;
}