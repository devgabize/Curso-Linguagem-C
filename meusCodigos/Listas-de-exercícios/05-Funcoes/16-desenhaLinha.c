#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void desenhaLinha(int qtd){
    printf("\n");
    for(int i = 0; i < qtd; i++){
        printf("=");
    }
    printf("\n\n");
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int qtdSinais;

    printf("Digite quantos sinais de igual serão mostrados: ");
    scanf("%d", &qtdSinais);

    //Chamando a função.
    desenhaLinha(qtdSinais);

    //Retorno da função.
    return 0;
}