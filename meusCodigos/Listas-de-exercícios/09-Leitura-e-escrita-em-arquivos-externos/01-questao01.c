#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    char *caracter, c;
    int cont = 0, z;

    //Alocando memória para caracter.
    caracter = (char*)malloc(8 * sizeof(char));

    //Criando variável para o arquivo.
    FILE *arqv;

    //Abrindo o arquivo.
    arqv = fopen("arq.txt", "a");

    //Tratando caso ocorra algum erro em abrir/criar o arquivo.
    if(arqv == NULL){
        printf("\n### ERRO AO CRIAR OU ABRIR O ARQUIVO! ###\n");
        return 1;
    }

    //Lendo os carateres.
    printf("\nDigite os caracteres e ao final digite 0 (zero):\n");
    do{
        scanf(" %c", &c);
        if(c != '0'){
            caracter[cont] = c;
            cont++;
            caracter = (char*)realloc(caracter, 8 * sizeof(char));
        }
    }while(c != '0');

    //Armazenando a string no arquivo.
    fprintf(arqv, "%s", caracter);

    //Fechando o arquivo.
    fclose(arqv);
    printf("\n==== DADOS GRAVADOS COM SUCESSO! ====\n");

    return 0;
}