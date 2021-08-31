#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 22 - Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo,
nas posições pares os valores do primeiro e nas posições impares os valores do se-
gundo.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");
    
    //Definindo variáveis.
    float vet1[5], vet2[5], prodEscalar = 0; 
    int contVet1 = 0, contVet2 = 0;

    //Lendo os valor do primeiro vetor (vet1).
    cout <<  "\nINFORME 5 VALORES PARA O PRIMEIRO VETOR:\n";
    for(int i = 0; i < 5; i++){
        cout << "DIGITE UM VALOR: ";
        cin >> vet1[i];
    }

    //Lendo os valor do segundo vetor (vet2).
    cout <<  "\nINFORME 5 VALORES PARA O SEGUNDO VETOR:\n";
    for(int i = 0; i < 5; i++){
        cout << "DIGITE UM VALOR: ";
        cin >> vet2[i];
    }

    //Calculando o porduto escalar dos dois vetores lidos.
    for(int i = 0; i < 5; i++){
        prodEscalar += (vet1[i] * vet2[i]);
    }

    //Mostrando na tela os vetores lidos e o produto escalar entre eles.
    cout << "\nVETOR 1: { ";
    for(int i = 0; i < 5; i++){
        cout << vet1[i] << " ";
    }
    cout << "}\n";

    cout << "\nVETOR 2: { ";
    for(int i = 0; i < 5; i++){
        cout << vet2[i] << " ";
    }
    cout << "}\n";

    cout << "\nPRODUTO ESCALAR: " << prodEscalar << "\n\n";

    return 0;
}