#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 15 - Leia uma matriz 5 x 10 que se refere respostas de 10 questões de múltipla escolha,
referentes a 5 alunos. Leia também um vetor de 10 posições contendo o gabarito de respostas que podem ser a, b, c ou d. Seu programa deverá comparar as respostas de cada candidato com o gabarito e emitir um vetor denominado resultado, contendo a pontuação correspondente a cada aluno.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    char respostas[5][10], gabarito[10];
    int resultado[5];

    //Lendo as respostas dos alunos.
    cout << "\nInforme as respostas dos alunos:\n";
    for(int i = 0; i < 5; i++){
        cout << "Digite as respostas do aluno " << (i + 1) << ":\n";
        for(int j = 0; j < 10; j++){
            cout << "\nQuestão " << (j + 1) << ": ";
            cin >> respostas[i][j];
        }
    }

    //Lendo as respostas do gabarito.
    cout << "\nInforme as respostas do gabarito:\n";
    for(int i = 0; i < 10; i++){
            cout << "\nQuestão " << (i + 1) << ": ";
            cin >> gabarito[i];
    }

    //Inicializando o vetor resultado para ter certeza que não terá nenhum valor diferente de (0)zero.
    for(int i = 0; i < 5; i++){
        resultado[i] = 0;
    }

    //Comparando as respostas do gabarito com as respostas dos alunos:
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            if(respostas[i][j] == gabarito[j]){
                resultado[i] += 1;
            }
        }
    }

    //Mostrando resultado dos alunos.
    cout << "\nRESULTADO ALUNOS:\n";
    for(int i = 0; i < 5; i++){
        cout << "Aluno " << (i + 1) << " acertou " << resultado[i] << " questão(ões).\n";
    }
    cout << "\n";
}