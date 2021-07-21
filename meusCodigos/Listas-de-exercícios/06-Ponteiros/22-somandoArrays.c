#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int somaArray(int *vet1, int *vet2, int *soma, int tam1, int tam2){
    if(tam1 == tam2){
        for(int i = 0; i < tam2; i++){
            *soma = *vet1 + *vet2;
            soma++;
            vet1++;
            vet2++;
        }
        return 1;
    }else{
        return 0;
    }
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int vet1[5] = {1,2,3,4,5}, vet2[5] = {6,7,8,9,10}, soma[5];

    //Chamando a função e mostrando resultados.
    if(somaArray(vet1, vet2, soma, 5, 5) == 1){
        printf("\nVETOR: {");
        for(int i = 0; i < 5; i++){
            printf(" %d", soma[i]);
        }
        printf(" }\n\n");
    }else{
        printf("\nVETORES POSSUEM TAMANHO DIFERENTES!\n\n");
    }

    //Retorno da função.
    return 0;
}