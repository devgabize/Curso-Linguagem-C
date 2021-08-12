#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int mostraElementosArray(int *vet, int i, int x){
    if(x == i){
        printf(" %d", vet[x]);
        return 4;
    }else{
        printf(" %d", vet[x]);
        return mostraElementosArray(vet, i, (x + 1));
    }
}

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definir variáveis.
    int vet[5];

    //Lendo valores do vetor.
    printf("\n== DIGITE VALORES INTEIROS ==\n");
    for(int i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    //Chamando a função.
    printf("\nVETOR: {");
    mostraElementosArray(vet, 4, 0);
    printf(" }\n\n");
}