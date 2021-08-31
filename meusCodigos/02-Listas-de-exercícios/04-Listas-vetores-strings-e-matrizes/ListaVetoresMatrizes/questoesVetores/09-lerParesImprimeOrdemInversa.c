#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 09 - Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os valores lidos na ordem inversa.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int vet[6], num, i = 0;

    //Lendo os valores e guardando no vetor.
    printf("\nDIGITE VALORES PARES INTEIROS:\n");
    do{
        printf("%d° valor: ", (i + 1));
        scanf("%d", &num);
        if((num % 2) == 0){
            vet[i] = num;
            i++; 
        }
    }while(i < 6);

    //Imprimindo na ordem inversa.
    printf("\nVETOR DE PARES: { ");
    for(int i = 5; i >= 0; i--){
        printf("%d ", vet[i]);
    }
    printf("}\n\n");
}