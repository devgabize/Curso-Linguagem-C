#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

/*Questão 29 - Faça uma prova de matemática para crianças que estão aprendendo a somar números
inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas corretas, além de quantas vezes o aluno acertou.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Responsável por alimentar o rand.
    srand((unsigned)time(NULL));

    //Definindo variáveis.
    int a = rand() % 100, b = rand() % 100, resp, qtdAcertos = 0;

    printf("\n===== PROVA DE MATEMÁTICA =====\n\n");
    printf("QUESTÃO 01: Qual é a soma de %d + %d? ", a, b);
    scanf("%d", &resp);
    if(resp == (a + b)){
        printf("RESPOSTA CORRETA!\n\n");
        qtdAcertos = qtdAcertos + 1;
    }else{
        printf("VOCÊ ERROU! RESPOSTA CORRETA: %d\n", (a + b));
    }

    a = rand() % 100, b = rand() % 100;

    printf("QUESTÃO 02: Qual é a soma de %d + %d? ", a, b);
    scanf("%d", &resp);
    if(resp == (a + b)){
        printf("RESPOSTA CORRETA!\n\n");
        qtdAcertos = qtdAcertos + 1;
    }else{
        printf("VOCÊ ERROU! RESPOSTA CORRETA: %d\n", (a + b));
    }

    a = rand() % 100, b = rand() % 100;

    printf("QUESTÃO 03: Qual é a soma de %d + %d? ", a, b);
    scanf("%d", &resp);
    if(resp == (a + b)){
        printf("RESPOSTA CORRETA!\n\n");
        qtdAcertos = qtdAcertos + 1;
    }else{
        printf("VOCÊ ERROU! RESPOSTA CORRETA: %d\n", (a + b));
    }

    a = rand() % 100, b = rand() % 100;

    printf("QUESTÃO 04: Qual é a soma de %d + %d? ", a, b);
    scanf("%d", &resp);
    if(resp == (a + b)){
        printf("RESPOSTA CORRETA!\n\n");
        qtdAcertos = qtdAcertos + 1;
    }else{
        printf("VOCÊ ERROU! RESPOSTA CORRETA: %d\n", (a + b));
    }

    a = rand() % 100, b = rand() % 100;

    printf("QUESTÃO 05: Qual é a soma de %d + %d? ", a, b);
    scanf("%d", &resp);
    if(resp == (a + b)){
        printf("RESPOSTA CORRETA!\n\n");
        qtdAcertos = qtdAcertos + 1;
    }else{
        printf("VOCÊ ERROU! RESPOSTA CORRETA: %d\n", (a + b));
    }

    printf("\n   VOCÊ ACERTOU: %d QUESTÕES!\n\n", qtdAcertos);

}