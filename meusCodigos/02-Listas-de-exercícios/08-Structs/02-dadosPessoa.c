#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct Pessoa{
    char nome[30];
    int idade;
    char endereco[300];
};

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    struct Pessoa dados;

    //Lendo os dados.
    printf("\n----------------------------------------------------\n------------ Informe os dados da pessoa ------------\n----------------------------------------------------\n");
    printf("Nome: ");
    scanf(" %[^\n]s", &dados.nome);
    printf("Idade: ");
    scanf(" %d", &dados.idade);
    printf("Endereço: ");
    scanf(" %[^\n]s", &dados.endereco);
    printf("----------------------------------------------------\n");

    //Mostrando dados lidos.
    printf("\n--------------------------------------------------------------\n");
    printf("------------------------- DADOS LIDOS ------------------------\n");
    printf("--------------------------------------------------------------\n");
    printf("Nome: %s\nIdade: %d\nEndereço: %s", dados.nome, dados.idade, dados.endereco);
    printf("\n--------------------------------------------------------------\n\n");    
}