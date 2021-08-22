#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct Aluno{
    char nome[30];
    int matricula, codDisciplina;
    float nota1, nota2;
};

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float media;
    struct Aluno *alunos;

    //Alocando memória para alunos.
    alunos = (struct Aluno*) malloc(10 * sizeof(struct Aluno));

    //Lendo os dados dos alunos.
    printf("\nINFORME OS DADOS DOS ALUNOS\n");
    for(int i = 0; i < 10; i++){
        printf("\n---ALUNO %d---\n", (i + 1));
        printf("Nome: ");
        scanf(" %[^\n]s", &alunos[i].nome);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Código da disciplina: ");
        scanf("%d", &alunos[i].codDisciplina);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
    }

    //Listagem dos alunos.
    printf("\nLISTAGEM DOS ALUNOS\n");
    for(int i = 0; i < 10; i++){
        printf("\n---ALUNO %d---\n", (i + 1));
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Código da disciplina: %d\n", alunos[i].codDisciplina);;
        media = ((alunos[i].nota1 * 1.0) + (alunos[i].nota2 * 2.0)) / 3.0;
        printf("Média: %.1f\n", media);
    }
    printf("\n\n");
}