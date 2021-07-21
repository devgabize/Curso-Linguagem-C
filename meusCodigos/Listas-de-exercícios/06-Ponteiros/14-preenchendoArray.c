#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void preenchendoVetor(int *vet, int num){
    for(int i = 0; i < 5; i++){
        *vet = num;
        vet++;
    }
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int vet[5];

    //Chamando a função.
    preenchendoVetor(vet, 97);

    //Mostrando vetor.
    printf("\nVETOR: {");
    for(int i = 0; i < 5; i++){
        printf(" %d", vet[i]);
    }
    printf(" }\n\n");

    //Retorno da função.
    return 0;
}