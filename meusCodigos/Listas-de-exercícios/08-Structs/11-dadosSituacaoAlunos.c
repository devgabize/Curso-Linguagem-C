#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct Aluno{
    char nome[30];
    int matricula;
    float mediaFinal;
};

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    struct Aluno *alunos, *aprovado, *reprovado;
    int repro = 0, apro = 0;

    //Alocando memória para alunos.
    alunos = (struct Aluno*) malloc(10 * sizeof(struct Aluno));    

    //Lendo dados dos alunos.
    printf("\n--------ADICIONAR DADOS ALUNOS--------\n");
    for(int i = 0; i < 10; i++){
        printf("ALUNO %d\n----------\n", (i + 1));
        printf("NOME: ");
        scanf(" %[^\n]s", &alunos[i].nome);
        printf("MATRÍCULA: ");
        scanf("%d", &alunos[i].matricula);
        printf("MÉDIA FINAL: ");
        scanf("%f", &alunos[i].mediaFinal);
        if(alunos[i].mediaFinal >= 5.0){
            apro++;
        }else{
            repro++;
        }
        printf("\n");
    }

    //Alocando memória para aprovado e reprovado.
    aprovado = (struct Aluno*) malloc(apro * sizeof(struct Aluno));
    reprovado = (struct Aluno*) malloc(repro * sizeof(struct Aluno));

    //Analisando os aprovados ou reprovados.
    for(int i = 0; i < 10; i++){
        if(alunos[i].mediaFinal >= 5.0){
            aprovado[i] = alunos[i]; 
        }else{
            reprovado[i] = alunos[i];            
        }
    }

    //Mostrando a lista de aprovados e reprovados.
    printf("\n---------------\nLISTA APROVADOS\n---------------");
    for(int i = 0; i < apro; i++){
        printf("\nALUNO %d\n----------\n", (i + 1));
        printf("NOME: %s\n", aprovado[i].nome);
        printf("MATRÍCULA: %d\n", aprovado[i].matricula);
        printf("MÉDIA FINAL: %.1f\n", aprovado[i].mediaFinal);
    }
    printf("==================");
    printf("\n---------------\nLISTA REPROVADOS\n---------------");
    for(int i = 0; i < repro; i++){
        printf("\nALUNO %d\n----------\n", (i + 1));
        printf("NOME: %s\n", reprovado[i].nome);
        printf("MATRÍCULA: %d\n", reprovado[i].matricula);
        printf("MÉDIA FINAL: %.1f\n", reprovado[i].mediaFinal);
    }
    printf("==================\n\n");
}