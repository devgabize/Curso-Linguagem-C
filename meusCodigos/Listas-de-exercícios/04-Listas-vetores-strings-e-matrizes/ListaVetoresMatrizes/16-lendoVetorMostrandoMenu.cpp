#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 16 - Faça um programa que leia um vetor de 5 posições para números reais e, depois, um
código inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem
direta; se for 2, mostre o vetor na ordem inversa. Caso, o código for diferente de 1 e 2
escreva uma mensagem informando que o código é inválido.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float vet[5];
    int cod;

    //Lendo os valores do vetor e o código.
    cout << "\nINFORME 5 VALORES:\n";
    for(int i = 0; i < 5; i++){
        cout << "Digite um valor: ";
        cin >> vet[i];
    }

    do{
        cout << "\n----- MENU DE OPÇÕES -----\n1- MOSTRAR O VETOR (ORDEM DIRETA)\n2-MOSTRAR VETOR (ORDEM INVERSA)\n0-SAIR\n--------------------------\nDIGITE A OPÇÃO: ";
        cin >> cod;

        //Switch para executar a opção escolhida.
        switch(cod){
            //Imrpimindo vetor na ordem direta.
            case 1:
                cout << "VETOR ORDEM DIRETA: { ";
                for(int i = 0; i < 5; i++){
                    cout << vet[i] << " ";
                }
                cout << "}\n\n";
                break;
            //Imprmindo vetor na ordem inversa.
            case 2:
                cout << "VETOR ORDEM INVERSA: { ";
                for(int i = 4; i >= 0; i--){
                    cout << vet[i] << " ";
                }
                cout << "}\n\n";
                break;
            //Finalizando o programa.
            case 0:
                cout << "\n### PROGRAMA FINALIZADO! ###\n\n";
                break;
            default:
                cout << "\n\n=== CÓDIGO INVÁLIDO ===\n\n";
                break;
        }
    }while(cod != 0);
    
    return 0;
}