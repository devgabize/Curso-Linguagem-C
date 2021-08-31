#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void imprimeArray(int *vet){
    printf("\nVETOR: {");
    for(int i = 0; i < 5; i++){
        printf(" %d", *vet);
        vet++;
    }
    printf(" }\n\n");
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int vet[5] = {1, 2, 3, 4, 5};

    //Chamando a função.
    imprimeArray(vet);

    //Retorno da função.
    return 0;
}