#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 17 - Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida, escreva
o número de alunos cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2, e o número de alunos cuja pior nota foi na prova 3. Em caso de empate das piores notas de um aluno, o critério de desempate é arbitrário, mas o aluno deve ser contabilizado apenas uma vez.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float notas[10][3], menorNota[10];
    int PiorNota1 = 0, PiorNota2 = 0, PiorNota3 = 0, locPiorNota[10];

    //Lendo notas dos alunos.
    cout << "\nDigite as notas dos alunos:\n";
    for(int i = 0; i < 10; i++){
        cout << "\nNotas aluno " << (i + 1) << ":\n";
        for(int j = 0; j < 3; j++){
            cout << "\n Nota prova " << (j + 1) << ": ";
            cin >> notas[i][j];
            if(j == 0){
                menorNota[i] = notas[i][j];
                locPiorNota[i] = j;
            }
        }
    }

    //Verificando a pior nota dos alunos.
    for(int i = 0; i < 10; i++){
        for(int j = 1; j < 3; j++){
            if(notas[i][j] < menorNota[i]){
                menorNota[i] = notas[i][j];
                locPiorNota[i] = j;
            }
        }
    }

    //verificar a qtd de alunos que tiveram a pior nota em uma das provas.
    for(int i = 0; i < 10; i++){
        if(locPiorNota[i] == 0){
            PiorNota1++;
        }else if(locPiorNota[i] == 1){
            PiorNota2++;
        }else if(locPiorNota[i] == 2){
            PiorNota3++;
        }
    }

    cout << "\nQtd de alunos com pior nota:\n";
    cout << "Prova 1: " << PiorNota1 << " aluno(s).\n";
    cout << "Prova 2: " << PiorNota2 << " aluno(s).\n";
    cout << "Prova 3: " << PiorNota3 << " aluno(s).\n";
    return 0;
}