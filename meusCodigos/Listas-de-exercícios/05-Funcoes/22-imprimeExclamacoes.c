#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void imprimeExclamacao(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("!");
        }
        printf("\n");
    }
    printf("\n\n");
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int n;

    printf("Digite a qtd de linha com pontos de exclamação: ");
    scanf("%d", &n);

    //Chamando a função.
    imprimeExclamacao(n);

    //Retorno da função.
    return 0;
}