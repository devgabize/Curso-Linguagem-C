#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<iomanip>
#include<locale.h>

/*QUESTÃO 31 - Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a união
entre os 2 vetores anteriores, ou seja, que contém os números dos dois vetores. Não
deve conter números repetidos.*/

using namespace std;

int main(){
    //Definindo casas decimais.
    cout << fixed << setprecision(2);

    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float vet1[10], vet2[10], uniao[20];
    int cont = 0, verif = 0, aux;

    //Lendo os valores dos dois vetores.
    cout << "\nDIGITE 10 VALORES PARA O VETOR 1:\n";
    for(int i = 0; i < 10; i++){
        cout << "Digite o valor: ";
        cin >> vet1[i];
    }
    cout << "\nDIGITE 10 VALORES PARA O VETOR 2:\n";
    for(int i = 0; i < 10; i++){
        cout << "Digite o valor: ";
        cin >> vet2[i];
    }

    //Unindo os dois vetores.
    //Adicionando todos os elementos de vet1.
    for(int i = 0; i < 10; i++){
        uniao[i] = vet1[i];
        cont++;
    }

    //Adicionando os elementos de vet2 e verificando se já existe algum elemento no vetor uniao.
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < cont; j++){
            if(vet2[i] != uniao[j]){
                verif++;
            }
        }
        if(verif == cont){
            uniao[cont] = vet2[i];
            cont++;
        }
        verif = 0;
    }

    //Mostrando união vetores na tela.
    cout << "\nVETOR UNIÃO: { ";
    for(int i = 0; i < cont; i++){
        cout << uniao[i] << " ";
    }
    cout << "}\n\n";

}