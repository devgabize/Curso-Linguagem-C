#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int encontrandoMenorValorNoVetor(int *vet, int i, int x,int menor){
    if(x == i){
        if(vet[x] < menor){
            menor = vet[x];
        }
        return menor;
    }else{
        if(vet[x] < menor){
            menor = vet[x];
        }
        return encontrandoMenorValorNoVetor(vet, i, (x + 1), menor);
    }
}

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int vet[5], menor;

    //Lendo valores do vetor e atribuindo o primeiro valor digitado a variável menor para comparação.
    for(int i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
        if(i == 0){
            menor = vet[i];
        }
    }

    //Chamando a função.
    printf("\nMenor valor do vetor: %d\n\n", encontrandoMenorValorNoVetor(vet, 4, 0, menor));
}