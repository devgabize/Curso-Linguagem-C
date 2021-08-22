#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

struct Aluno{
    char nome[30];
    int matricula;
    char curso[150];
};

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    struct Aluno *aluno;

    //Alocando memória para aluno.
    aluno = (struct Aluno*) malloc(5 * sizeof(struct Aluno));

    //Lendo os dados dos 5 alunos.
    printf("------------------------\n     CADASTRO ALUNOS\n------------------------\n");
    for(int i = 0; i < 5; i++){
        printf("DADOS ALUNO %d\n--------------\n", (i + 1));
        printf("Nome: ");
        scanf(" %[^\n]s", &aluno[i].nome);
        printf("Matrícula: ");
        scanf(" %d", &aluno[i].matricula);
        printf("Curso: ");
        scanf(" %[^\n]s", &aluno[i].curso);
        printf("\n");
    }

    //Mostrando dados alunos cadastrados.
    printf("\n======================\n   ALUNOS CADASTRADOS\n======================\n");
    for(int i = 0; i < 5; i++){
        printf("\n---------------------\n    ALUNO %d\n---------------------\n", (i + 1));
        printf("Nome: %s\n", aluno[i].nome);
        printf("Matricula: %d\n", aluno[i].matricula);
        printf("Curso: %s", aluno[i].curso);
        printf("\n---------------------");
    }
    printf("\n\n");
}