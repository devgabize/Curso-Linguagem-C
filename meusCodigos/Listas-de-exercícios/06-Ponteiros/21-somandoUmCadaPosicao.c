#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int vet[5] = {1,2,3,4,5}, *pont;
    pont = vet;

    //Adicionando 1 a cada posição.
    for(int i = 0; i < 5; i++){
        *pont += 1;
        pont++;
    }

    pont = vet;

    //Mostrando resultado.
    printf("\nVETOR: {");
    for(int i = 0; i < 5; i++){
        printf(" %d", *pont);
        pont++;
    }
    printf(" }\n\n");

    //Retorno da função.
    return 0;
}