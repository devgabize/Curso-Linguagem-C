#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 29 - Faça um programa que receba 6 números inteiros e mostre:
• Os números pares digitados;
• A soma dos números pares digitados;
• Os números ı́mpares digitados;
• A quantidade de números ı́mpares digitados;*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int v[6], par[6], impar[6], cont1 = 0, cont2 = 0, somaPar = 0;

    //Lendo valores do vetor v.
    cout << "\nDIGITE 6 VALORES PARA O VETOR:\n";
    for(int i = 0; i < 6; i++){
        cout << "DIGITE: ";
        cin >> v[i];
    }

    //Analisando vetor e separando os impares e pares entre par e impar.
    for(int i = 0; i < 10; i++){
        if((v[i] % 2) == 0){
            par[cont2] = v[i];
            cont2++;
        }else{
            impar[cont1] = v[i];
            cont1++;
        }   
    }

    //Mostrando os vetores Par e Impar, assim como a soma dos pares e qtd dos impares na tela.
    cout << "\nVETOR PARES: { ";
    for(int i = 0; i < cont1; i++){
        cout << par[i] << " ";
        somaPar += par[i];
    }
    cout << "}\n";
    cout << "SOMA NÚMEROS PARES: " << somaPar << "\n";

    cout << "\nVETOR ÍMPARES: { ";
    for(int i = 0; i < cont1; i++){
        cout << impar[i] << " ";
    }
    cout << "}\n";
    cout << "Qtd números ímpares: " << cont1 << "\n\n";
    
    return 0;
}