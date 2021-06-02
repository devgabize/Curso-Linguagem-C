#include<stdio.h>
#include<stdlib.h>
#include<iostream>

/*QUESTÃO 12 - Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a média dos valores.*/

using namespace std;

int main(){
    //Para utilizar acentos
    setlocale(LC_ALL,"");

    //Definindo variáveis
    float vet[5], maior, menor, media, soma = 0;

    //Lendo os 5 valores.
    cout << "\nINFORME 5 VALORES!\n";
    for(int i = 0; i < 5; i++){
        cout << "Digite o " << (i + 1) << "° valor: ";
        cin >> vet[i];
        soma += vet[i];
    }

    maior = vet[0];
    menor = vet[0];

    //Verificando os valores digitados e definindo o maior e o menor.
    for(int i = 0; i < 5; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }else if(vet[i] < menor){
            menor = vet[i];
        }
    }

    //Mostrando resultado na tela.
    cout << "VETOR DIGITADO: { ";
    for(int i = 0; i < 5; i++){
        cout << " " << vet[i] << " ";
    }
    cout << "}\n";

    cout << "\nMAIOR NÚMERO DIGITADO: " << maior;
    cout << "\nMENOR NÚMERO DIGITADO: " << menor;
    cout << "\nMÉDIA DOS VALORES DIGITADOS: " << (soma / 5.0)  << "\n\n";

    return 0;
}