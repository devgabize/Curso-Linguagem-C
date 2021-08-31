#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 34 - Faça um programa para ler 10 números DIFERENTES a serem armazenados em um
vetor. Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos,
sendo que caso o usuário digite um número que já foi digitado anteriormente, o programa
deverá pedir para ele digitar outro número. Note que cada valor digitado pelo usuário
deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram
fornecidos. Exibir na tela o vetor final que foi digitado.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float vet[10], num;
    int i = 0, verif = 0;

    //Lendo os valores do vetor e verificando se já foi digitado.
    cout << "\nDIGITE 10 VALORES PARA O VETOR:\n";
    do{
        cout << "Digite o valor: ";
        cin >> num;

        if(i == 0){
            vet[0] = num;
            i++;
        }else{
            for(int j = 0; j < i; j++){
                if(num != vet[j]){
                    verif++;
                }
            }
            if(verif == i){
                vet[i] = num;
                i++;
            }else{
                cout << "\n## NÚMERO JÁ FOI DIGITADO! ##\n     Digite novamente\n\n";
            }
            verif = 0;            
        }
    }while(i < 10);

    //Mostrando vetor digitado.
    cout << "\nVETOR DIGITADO: { ";
    for(int i = 0; i < 10; i++){
        cout << vet[i] << " ";
    }
    cout << "}\n\n";

    return 0;
}