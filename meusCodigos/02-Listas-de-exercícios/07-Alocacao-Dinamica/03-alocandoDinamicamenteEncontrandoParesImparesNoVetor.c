#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int *vet, tamanho, par = 0, impar = 0;

    //Lendo o tamanho do vetor.
    printf("\nQual o tamanho do vetor: ");
    scanf("%d", &tamanho);

    //Alocando memória.
    vet = (int *) malloc(tamanho * sizeof(int));

    //Lendo os valores do vetor.
    printf("\nDigite os valores do vetor!\n");
    for(int i = 0; i < tamanho; i++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
        if(vet[i] % 2 == 0){
            par++;
        }else{
            impar++;
        }
    }

    //Mostrando resultado.
    printf("\nDos números digitados, %d são par e %d são ímpar!\n\n", par, impar);

    //Limpando vetor da memória.
    free(vet);

}