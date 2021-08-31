#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void main(){
    //utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int existeLinha = 0, qtdLinhas = 0;
    char caract;

    //Criando variáveis do arquivo.
    FILE *file;

    //Abrindo arquivo.
    file = fopen("arq.txt", "r");

    while(fgetc(file) != EOF){
        existeLinha = 1;
        if(fgetc(file) == '\n'){
            qtdLinhas++;
        }
    }

    if(existeLinha != 0){
        qtdLinhas++;
    }

    printf("\nQtd de linhas do arquivo: %d\n\n", qtdLinhas);
}