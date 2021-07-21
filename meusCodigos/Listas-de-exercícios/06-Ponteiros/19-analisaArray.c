#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void analisaArray(int *vet, int *maior, int *repet){
    for(int i = 0; i < 9; i++){
        if(*vet > *maior){
            *maior = *vet;
            *repet = 1;
        }else if(*vet == *maior){
            *repet += 1;
        }
        vet++;
    }
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int vet[9] = {5,2,15,3,7,15,8,6,15}, maior = 5, repet = 0;

    //Chamando a função.
    analisaArray(vet, &maior, &repet);

    //Mostrando resultado.
    printf("\nMaior valor: %d\nRepetição maior valor: %d\n\n", maior, repet);

    //Retorno da função.
    return 0;
}