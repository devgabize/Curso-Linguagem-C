#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){

    //Definindo variáveis.
    char c;

    //Criando variável para o arquivo.
    FILE *arqv;

    //Abrindo o arquivo.
        arqv = fopen("arq.txt", "r");

        //Fazendo a leitura do arquivo.
        do{
            c = fgetc(arqv);

            //Exibe o caractere lido na tela.
            printf("%c", c);

        }while(c != EOF);
        printf("\n\n");

        //Fechando o arquivo.
        fclose(arqv);
}