#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iostream>

/* QUESTÃO 13 - Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encon-
tram o maior e o menor valor.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float vet[5], maior, menor;
    int posiMaior, posiMenor;

    //Lendo os 5 valores.
    cout << "\nINFORME 5 VALORES:\n";
    for(int i = 0; i < 5; i ++){
        cout << "Digite o " << (i + 1) << "° valor: ";
        cin >> vet[i];
    }

    //Inicializando as variáveis maior, menor, posiMaior e posiMenor com o primeiro elemento do vetor.
    maior = vet[0];
    posiMaior = 0;
    menor = vet[0];
    posiMenor = 0;
    
    //Verificando os valores do vetor para encontrar o maior e menor valor armazenado e salvar sua posição no vetor.
    for(int i = 0; i < 5; i++){
        if(vet[i] > maior){
            maior = vet[i];
            posiMaior = i;
        }else if(vet[i] < menor){
            menor = vet[i];
            posiMenor = i;
        }
    }

    //Mostrando resultado na tela.
    cout << "O maior valor digitado foi " << maior << " e está amazenado na posição " << posiMaior << " do vetor.\n";
    cout << "O menor valor digitado foi " << menor << " e está amazenado na posição " << posiMenor << " do vetor.\n";

    return 0;
}