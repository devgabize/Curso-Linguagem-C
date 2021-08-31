#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int imprimeSerie(int i, int j, int k){
    if(i == j){
        printf(" %d", (i + k));
        return i;
    }else{
        printf(" %d", (i + k));
        return imprimeSerie((i + 1), j, k);
    }
}

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int i, j, k;

    //Lendo valores do intervalo [i,j] e do incremento k.
    printf("Digite o valor do início do intervalo: ");
    scanf("%d", &i);
    printf("Digite o valor do final do intervalo: ");
    scanf("%d", &j);
    printf("Informe o incremento: ");
    scanf("%d", &k);

    //Chamando a função.
    printf("\nVETOR: {");
    imprimeSerie(i, j, k);
    printf(" }\n\n");
}