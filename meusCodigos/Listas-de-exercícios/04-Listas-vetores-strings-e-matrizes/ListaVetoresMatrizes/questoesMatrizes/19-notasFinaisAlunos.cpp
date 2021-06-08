#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 19 - Faça um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes
informações sobre alunos de uma disciplina, sendo todas as informações do tipo inteiro:
    • Primeira coluna: número de matrı́cula (use um inteiro)
    • Segunda coluna: média das provas
    • Terceira coluna: média dos trabalhos
    • Quarta coluna: nota final
Elabore um programa que:
(a) Leia as três primeiras informações de cada aluno
(b) Calcule a nota final como sendo a soma da média das provas e da média dos
trabalhos
(c) Imprima a matrı́cula do aluno que obteve a maior nota final (assuma que só existe
uma maior nota)
(d) Imprima a média aritmética das notas finais.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int infoAlunos[5][4], MatriculaMaiorNota, maiorNota;
    float somaParaMedia = 0;

    //Lendo as informações dos alunos.
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            if(j == 0){
                cout << "Digite o número da matrícula: ";
                cin >> infoAlunos[i][j];
            }else if(j == 1){
                cout << "Digite a média das provas: ";
                cin >> infoAlunos[i][j];
            }else if(j == 2){
                cout << "Digite a média dos trabalhos: ";
                cin >> infoAlunos[i][j];
            }else if(j == 3){
                infoAlunos[i][j] = infoAlunos[i][1] + infoAlunos[i][2];
                somaParaMedia += infoAlunos[i][j];
            }
        }
    }

    maiorNota = infoAlunos[0][3];
    MatriculaMaiorNota = infoAlunos[0][0];

    //Buscando a maior nota.
    for(int i = 0; i < 5; i++){
        for(int j = 3; j < 4; j++){
            if(infoAlunos[i][j] > maiorNota){
                maiorNota = infoAlunos[i][j];
                MatriculaMaiorNota = infoAlunos[i][0];
            }
        }
    }

    cout << "\nMATRÍCULA DO ALUNO COM MAIOR NOTA: " << MatriculaMaiorNota;
    cout << "\nMÉDIA NOTAS FINAIS: " << (somaParaMedia / 5.0) << "\n\n";
    
    return 0;
}