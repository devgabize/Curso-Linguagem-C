#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 10 - Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a média geral.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float vet[15], soma = 0;

    //Lendo notas alunos.
    printf("\nINFORME AS NOTAS:\n");
    for(int i = 0; i < 15; i++){
        printf("\nDigite a %dª nota: ", (i + 1));
        scanf("%f", &vet[i]);
        soma += vet[i];
    }

    //Mostrando a média geral.
    printf("\nMÉDIA GERAL DA TURMA: %.2f\n\n", (soma / 15.0));
}