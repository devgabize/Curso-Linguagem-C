#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void verificaStrings(char *palavra1, char *palavra2){
    int caractIguais = 0;
    for(int i = 0; i < strlen(palavra2); i++){
        if(palavra1[i] == palavra2[i]){
            caractIguais++;
        }
    }
    if(caractIguais == strlen(palavra1)){
        printf("\nStrings são iguais!\n\n");
    }else{
        printf("\nStrings são diferentes!\n\n");
    }
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    char str1[15], str2[15];

    fflush(stdin);
    printf("Digite uma palavra: ");
    scanf(" %[^\n]", &str1); //%[^\n] para ler palavras com espaços.

    fflush(stdin);
    printf("Digite outra palavra: ");
    scanf(" %[^\n]", &str2);

    //Chamando a função.
    verificaStrings(str1, str2);

    //Retorno da função.
    return 0;
}