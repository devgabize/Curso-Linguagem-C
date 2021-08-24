#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    //Cursor que irá percorrer cada letra
    int c;

    //Arquivo a ser lido.
    FILE *file;

    //Abre o arquivo n diretório escolhido.
    file = fopen("Aula01.txt", "r");

    //Se o arquivo foi encontrado.
    if(file){
        //encontra letras(até o fim do arquivo).
        while((c = getc(file)) != EOF){
            //Imprime na tela.
            printf("%c", c);
        }

        //Fecha o arquivo.
        fclose(file);
    }

    printf("\n\n");

    return 0;
}