#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 19 - Escreva um programa que leia a idade e o primeiro nome de 10 pessoas. Seu programa
deve terminar quando uma idade negativa for digitada. Ao terminar, seu programa deve
escrever o nome e a idade das pessoas mais jovens e mais velhas.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int idade[10], i = 0, j = 0, ordemIdade[10], auxIdade;
    char nome[10][10], ordemNome[10][10], auxNome[10];

    //Lendo o nome das 10 pessoas e as idade.
    printf("Informe a idade e o primeiro nome das 10 pessoas.\n");
    do{
        printf("\n======= PESSOA %d =======\nIDADE: ", (i + 1));
        scanf("%d", &idade[i]);
        if(idade[i] > 0){  
            getchar();          
            printf("PRIMEIRO NOME: ");
            fgets(nome[i], 10, stdin);
            if(i == 0){
                ordemIdade[0] = idade[0];
                ordemNome[0][0] = nome[0][0];
            }            
        }        
        i++;
        j++;
    }while(idade[i] > 0);

    /*printf("\n===== LISTA DAS PESSOAS MAIS JOVENS ATÉ AS MAIS VELHAS =====\n");
    for(i = 0; i < 10; i++){
        printf("Nome: %s ---> Idade: %d", ordemNome[i], ordemIdade[i]);
    }
    printf("\n============================================================\n\n");*/



}