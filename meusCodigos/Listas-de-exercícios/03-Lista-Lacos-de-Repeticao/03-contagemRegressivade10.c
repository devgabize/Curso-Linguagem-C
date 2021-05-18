#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 3 - Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva
na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int i = 10;

    //Contagem regressiva.
    printf("\n====== CONTAGEM REGRESSIVA ======\n    ");
    while(i >= 0){
        printf(" %d", i);
        i--;
    }
    printf("\nFIM!");

    //Pulando linha só para organização.
    printf("\n\n");
}