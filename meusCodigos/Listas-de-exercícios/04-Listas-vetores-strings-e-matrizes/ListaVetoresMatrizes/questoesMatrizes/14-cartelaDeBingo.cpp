#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>
#include<time.h>

/*QUESTÃO 14 - Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de
bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a cartela gerada.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Para alimentar o rand.
    srand((unsigned)time(NULL));

    //Definindo variáveis.
    int dados[25], mat[5][5], num, qtdNum = 0, teste = 0;

    do{
        num = rand() % 99;
        if(qtdNum == 0){
            dados[qtdNum] = num;
            qtdNum++;
        }else{
            for(int i = 0; i < qtdNum; i++){
                if(num != dados[i]){
                    teste++;
                }
            }
            if(teste == qtdNum){
                dados[qtdNum] = num;
                qtdNum++;
            }             
            teste = 0;
        }
    }while(qtdNum < 25);

    //Adicionando dados gerados na cartela do bingo.
    qtdNum = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            mat[i][j] = dados[qtdNum];
            qtdNum++;
        }
    }

    //Mostrando cartela do bingo.
    cout << "\nCARTELA GERADA:\n";
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
           if(mat[i][j] < 10){
               cout << " " << mat[i][j] << " ";
           }else{
               cout << mat[i][j] << " ";
           } 
        }
        cout << "\n";
    }
    cout << "\n";

    return 0;
}