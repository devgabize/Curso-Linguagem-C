#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 16 - Faça um programa para corrigir uma prova com 10 questões de múltipla escolha (a, b,
c, d ou e), em uma turma com 3 alunos. Cada questão vale 1 ponto. Leia o gabarito, e
para cada aluno leia sua matricula (número inteiro) e suas respostas. Calcule e escreva:
Para cada aluno, escreva sua matrı́cula, suas respostas, e sua nota. O percentual de
aprovação, assumindo média 7.0.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    char prova[3][10], gabarito[10];
    int matricula[3], nota[3];

    //Inicializando vetor nota para ter certeza que não terá nenhum valor diferente de zero.
    for(int i = 0; i < 3; i++){
        nota[i] = 0;
    }

    //Lendo o gabarito da prova.
    cout << "\nINFORME O GABARITO DA PROVA:\n";
    for(int i = 0; i < 10; i++){
        cout << "Questão " << (i + 1) << ": ";
        cin >> gabarito[i];
    }

    //Lendo a matrícula e as respostas de cada aluno.
    for(int i = 0; i < 3; i++){
        cout << "\nAluno " << (i + 1) << " digite sua matrícula: ";
        cin >> matricula[i];
        cout << "\nInforme suas respostas:\n";
        for(int j = 0; j < 10; j++){
            cout << "Questão " << (j + 1) << ": ";
            cin >> prova[i][j];
        }
    }

    //Analisando respostas dos alunos, calculando suas notas.
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 10; j++){
            if(prova[i][j] == gabarito[j]){
                nota[i] += 1;
            }
        }
    }

    //Mostrando matrícula, respostas e notas dos alunos.
    for(int i = 0; i < 3; i++){
        cout << "\nAluno " << (i + 1) << " ---> Matrícula: " << matricula[i];
        cout << "\nRespostas na prova:";
        for(int j = 0; j < 10; j++){
            cout << "   \nQUESTÃO " << (j + 1) << ": " << prova[i][j] << "  ";
        }
        if(nota[i] >= 7){
            cout << "\n\nNota: " << nota[i];
            cout << "\nALUNO APROVADO!\n";
        }else{
            cout << "\n\nNota: " << nota[i];
            cout << "\nALUNO REPROVADO!\n";
        }
        cout << "\n";
    }
    return 0 ;
}