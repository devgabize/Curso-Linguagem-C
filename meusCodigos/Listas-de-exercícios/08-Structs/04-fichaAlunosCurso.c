#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct alunosCurso{
    int matricula;
    char nome[30];
    float nota1, nota2, nota3;
};

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    struct alunosCurso *alunos;
    int indMaiorNota1, indMaiorMedia, indMenorMedia;
    float maiorNota1, maiorMedia, menorMedia, media;

    //Alocando memória para alunos.
    alunos = (struct alunosCurso*) malloc(5 * sizeof(struct alunosCurso));

    //Lendo dados dos alunos.
    printf("Informe os dados dos alunos!\n");
    for(int i = 0; i < 5; i++){
        printf("\n----ALUNO %d----\n", (i + 1));
        printf("Nome: ");
        scanf(" %[^\n]s", &alunos[i].nome);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nota Prova 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota Prova 2: ");
        scanf("%f", &alunos[i].nota2);
        printf("Nota Prova 3: ");
        scanf("%f", &alunos[i].nota3);
        if(i == 0){
            maiorNota1 = alunos[i].nota1;
            maiorMedia = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
            menorMedia = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
            indMaiorMedia = i;
            indMenorMedia = i;
            indMaiorNota1 = i;
        }
    }

    /*Encontrando aluno com a maior nota na prova 1, aluno com a maior média geral e aluno com a menor média geral. Mostrando situação de cada aluno.*/
    printf("\n---------------------------------\n");
    printf("--------ANALISANDO ALUNOS--------\n");
    printf("---------------------------------\n");
    for(int i = 0; i < 5; i++){
        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
        if(alunos[i].nota1 > maiorNota1){
            maiorNota1 = alunos[i].nota1;
            indMaiorNota1 = i;
        }if(media > maiorMedia){
            maiorMedia = media;
            indMaiorMedia = i;
        }else if(media < menorMedia){
            menorMedia = media;
            indMenorMedia = i;
        }
        printf("\n-------------\nALUNO %d\n-------------\n", (i + 1));
        printf("Nome: %s\nMatricula: %d", alunos[i].nome, alunos[i].matricula);
        printf("\nMédia: %.1f\nSituação: ", media);
        if(media >= 6.0){
            printf("APROVADO\n");
        }else{
            printf("REPROVADO\n");
        }
    }

    printf("\nO aluno %s tirou %.1f na primeira prova sendo considerada a maior!\n", alunos[indMaiorNota1].nome, maiorNota1);
    printf("Maior média geral: %.1f do aluno %s\n", maiorMedia, alunos[indMaiorMedia
    ].nome);
    printf("Menor média geral: %.1f do aluno %s\n\n", menorMedia, alunos[indMenorMedia
    ].nome);
}