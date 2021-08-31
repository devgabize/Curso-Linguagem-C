#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>

/*QUESTÃO 06 - Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da
pessoa e a palavra “ACEITA”, caso contrário imprimir “NÃO ACEITA”.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    char nome[20], sexo[11];
    int idade;

    //Lendo dados da pessoa.
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite seu sexo: ");
    scanf("%s", &sexo);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    //Analisando dados e mostrando mensagem.
    if(strcmp(sexo, "feminino") == 0 && idade < 25){
        printf("\n%s\n", nome);
        printf("ACEITA!\n\n");
    }else{
        printf("\n%s\n", nome);
        printf("NÃO ACEITA!\n\n");  
    }
}