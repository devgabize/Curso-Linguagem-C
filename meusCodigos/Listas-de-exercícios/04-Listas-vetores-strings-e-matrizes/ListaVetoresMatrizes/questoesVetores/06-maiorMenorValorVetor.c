#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 06 - Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá
ser impresso o maior e o menor elemento do vetor.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int vet[10], maior, menor;

    //Lendo os valores do vetor.
    printf("\nDIGITE VALORES:\n");
    for(int i = 0; i < 10; i++){
        printf("%d° valor: ", (i + 1));
        scanf("%d", &vet[i]);
        if(i == 0){
            maior = vet[i];
            menor = vet[i];
        }
    }

    //Verificando o maior elemento do vetor.
    for(int i = 0; i < 10; i++){
        if(vet[i] < menor){
            menor = vet[i];
        }else if(vet[i] > maior){
            maior = vet[i];
        }
    }

    //Mostrando na tela o maior e o menor elemento do vetor.
    printf("\nMENOR VALOR: %d\n", menor);
    printf("MAIOR VALOR: %d\n\n", maior);
}