#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

char* alocaString(int tam){
    char *aux;

    //Alocando String.  
    aux = (char*)malloc(tam * sizeof(char));

    //Retornando ponteiro que aponta para primeira posição da string alocada.
    return aux;
}

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    char *string, tam;

    //Lendo o tamanho da string.
    printf("Digite o tamanho da string: ");
    scanf("%d", &tam);

    //Chamando a função para alocar dinamicamente a string.
    string = alocaString(tam);

    //Lendo conteúdo da string.
    printf("Qual o conteúdo da string?\n");
    scanf(" %[^\n]", string);

    //Imprimindo conteúdo da string sem as vogais.
    int i = 0;
    while(string[i] != '\0'){
        if(string[i] != 'a' && string[i] != 'A' && string[i] != 'e' && string[i] != 'E' && string[i] != 'i' && string[i] != 'I' && string[i] != 'o' && string[i] != 'O' && string[i] != 'u' && string[i] != 'U'){
            printf("%c", string[i]);
        }
        i++;
    }
    printf("\n\n");

    //Limpando vetor da memória.
    free(string);

}