#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 07 - Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima
o vetor, o maior elemento e a posição que ele se encontra.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int vet[10], maior, posi;

    //Lendo os valores do vetor.
    printf("\nDIGITE VALORES:\n");
    for(int i = 0; i < 10; i++){
        printf("%d° valor: ", (i + 1));
        scanf("%d", &vet[i]);
        if(i == 0){
            maior = vet[i];
            posi = i;
        }
    }

    //Verificando o maior elemento do vetor.
    for(int i = 0; i < 10; i++){
        if(vet[i] > maior){
            maior = vet[i];
            posi = i;
        }
    }
    
    //Imprimindo o vetor.
    printf("\nVETOR: { ");
    for(int i = 0; i < 10; i++){
        printf("%d ", vet[i]);   
    }
    printf("}\n");

    //Mostrando na tela o maior e o menor elemento do vetor.
    printf("\nMAIOR VALOR: %d\n", maior);
    printf("POSIÇÃO DO MAIOR: %d\n\n", posi);
}