#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 05 - Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int vet[10], qtdPAr = 0;

    //Lendo os valores e guardando no vetor.
    printf("\nDIGITE VALORES:\n");
    for(int i = 0; i < 10; i++){
        printf("%d° valor: ", (i + 1));
        scanf("%d", &vet[i]);
    }

    //Analisando os valores do vetor e verificando os pares.
    for(int i = 0; i < 10; i++){
        if((vet[i] % 2) == 0){
            qtdPAr++;
        }
    }

    //Mostrando quantos valores pares o vetor possui.
    printf("\nO vetor possui %d número(s) par(es).\n\n", qtdPAr);
}