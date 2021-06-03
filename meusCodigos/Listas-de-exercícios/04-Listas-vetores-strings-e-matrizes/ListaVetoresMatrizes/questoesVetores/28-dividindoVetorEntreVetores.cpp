#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 28 - Leia 10 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
Copie os valores ı́mpares de v para v1, e os valores pares de v para v2. Note que cada
um dos vetores v1 e v2 têm no máximo 10 elementos, mas nem todos os elementos são
utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int v[10], v1[10], v2[10], cont1 = 0, cont2 = 0;

    //Lendo valores do vetor v.
    cout << "\nDIGITE 10 VALORES PARA O VETOR:\n";
    for(int i = 0; i < 10; i++){
        cout << "DIGITE: ";
        cin >> v[i];
    }

    //Analisando vetor e separando os impares e pares entre v1 e v2.
    for(int i = 0; i < 10; i++){
        if((v[i] % 2) == 0){
            v2[cont2] = v[i];
            cont2++;
        }else{
            v1[cont1] = v[i];
            cont1++;
        }   
    }

    //Mostrando os vetores v1 e v2 na tela.
    cout << "\nVETOR 1 (ÍMPARES): { ";
    for(int i = 0; i < cont1; i++){
        cout << v1[i] << " ";
    }
    cout << "}\n";

    cout << "\nVETOR 2 (PARES): { ";
    for(int i = 0; i < cont1; i++){
        cout << v2[i] << " ";
    }
    cout << "}\n\n";
    return 0;
}