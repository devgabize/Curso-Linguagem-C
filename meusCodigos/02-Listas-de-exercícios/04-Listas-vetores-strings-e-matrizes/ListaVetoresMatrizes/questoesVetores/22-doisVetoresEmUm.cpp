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
    float vet1[10], vet2[10], vet3[20]; 
    int contVet1 = 0, contVet2 = 0;

    //Lendo os valor do primeiro vetor (vet1).
    cout <<  "\nINFORME 10 VALORES PARA O PRIMEIRO VETOR:\n";
    for(int i = 0; i < 10; i++){
        cout << "DIGITE UM VALOR: ";
        cin >> vet1[i];
    }

    //Lendo os valor do segundo vetor (vet2).
    cout <<  "\nINFORME 10 VALORES PARA O SEGUNDO VETOR:\n";
    for(int i = 0; i < 10; i++){
        cout << "DIGITE UM VALOR: ";
        cin >> vet2[i];
    }

    //Preenchendo terceiro vetor com os dois vetores lidos.
    for(int i = 0; i < 20; i++){
        if((i % 2) != 0){
            vet3[i] = vet2[contVet2];
            contVet2++;
        }else{
            vet3[i] = vet1[contVet1];
            contVet1++;
        }
    }

    //Mostrando na tela o terceiro vetor criando.
    cout << "\nVETOR 3 CRIADO: { ";
    for(int i = 0; i < 20; i++){
        cout << vet3[i] << " ";
    }
    cout << "}\n\n";

    return 0;
}