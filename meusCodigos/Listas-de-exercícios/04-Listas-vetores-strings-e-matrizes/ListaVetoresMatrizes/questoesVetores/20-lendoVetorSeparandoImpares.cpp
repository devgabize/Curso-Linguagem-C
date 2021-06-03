#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 20 - Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em um
vetor com 10 posições. Preencha um segundo vetor apenas com os números ı́mpares
do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int vet[10], impares[10], j = 0, i = 0, num, cont;

    //Lendo os valores e armazenando no vetor.
    cout << "\nINFORME 10 VALORES ENTRE 0 E 50:\n";
    do{
        cout << "Digite um valor: ";
        cin >> num;
        if(num >= 0 && num <= 50){
            vet[i] = num;
            i++;
        }else{
            cout << "\n## VALOR DIGITADO FORA DO INTERVALO [0, 50]! ##\n\n";
        }
    }while(i < 10);

    //Verificando o vetor e alimentando o segundo vetor com os valores impares.
    for(int i = 0; i < 10; i++){
        if(vet[i] % 2 != 0){
            impares[j] = vet[i];
            j++;
        }
    }

    
    //Imprimindo os dois vetores.
    cout << "\n|VETOR DIGITADO || VETOR IMPARES|\n";
    for(i = 0, cont = 0; i < 10; i++, cont++){
        if(cont < j){
            cout << "        " << vet[i] << "               " << impares[cont] << "       \n";
        }else{
            cout << "        " << vet[i] << "        \n";   
        }   
    }
    cout << "\n\n";
    return 0;
}