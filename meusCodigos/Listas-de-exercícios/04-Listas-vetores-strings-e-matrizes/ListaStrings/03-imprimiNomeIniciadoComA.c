#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

/*QUESTÃO 03 - Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’
(maiúscula ou minúscula).*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    char nome[20];

    //Lendo o nome.
    printf("Digite seu nome: ");
    scanf("%s", &nome);

    //Analisando o nome e imprimindo caso seja iniciado com 'a' maiúscula ou minúscula.
    if(nome[0] == 'a' || nome[0] == 'A'){
        printf("\nNome digitado: %s\n\n", nome);
    }else{
        printf("\n Tchau brigado!\n\n");
    }

}