#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    //Variáveis.
    char palavra[255];

    //Instrução.
    printf("Digite uma palavra: ");

    //Limpa o Buffer.
    setbuf(stdin, 0);

    //Lê a string.
    fgets(palavra, 255, stdin);

    //Limpa as casas não utilizadas.
    palavra[strlen(palavra) - 1] = '\0';

    //imprimindo na tela.
    printf("%s\n", palavra);
}