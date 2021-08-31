#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>
#include<iomanip>

/*QUESTÃO 30 - Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
intersecção entre os 2 vetores anteriores, ou seja, que contém apenas os números que
estão em ambos os vetores. Não deve conter números repetidos.*/

using namespace std;

int main(){
    //Definindo casas decimais.
    cout << fixed << setprecision(2);

    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float vet1[10], vet2[10], inter[10];
    int cont = 0, verif = 0, cont = 0;

    //Lendo os valores dos dois vetores.
    cout << "\nDIGITE 10 VALORES PARA O VETOR 1:\n";
    for(int i = 0; i < 10; i++){
        cout << "DIGITE O VALOR: ";
        cin >> vet1[i];
    }

    cout << "\nDIGITE 10 VALORES PARA O VETOR 2:\n";
    for(int i = 0; i < 10; i++){
        cout << "DIGITE O VALOR: ";
        cin >> vet2[i];
    }

    //Analisando os doi vetores e verificando os elemientos iguais entre eles.
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(vet1[i] == vet2[j]){
                for(int k = 0; k < cont; k++){
                    if(vet1[i] != inter[j]){
                        verif++;
                    }
                }
            }
        }
        if(verif == cont){
            inter[cont] = vet1[i];
            cont++;
        }
        verif = 0;
        
    }

    //Mostrando os elementos de interseção na tela.
    cout << "\nINTERSEÇÃO: { ";
    for(int i = 0; i < cont; i++){
        cout << inter[i] << " ";
    }
    cout << "}\n\n";
}