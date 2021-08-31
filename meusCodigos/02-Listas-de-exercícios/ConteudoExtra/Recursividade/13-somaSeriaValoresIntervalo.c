#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int SomaSerie(int i, int j, int k){
    if(i == j){
        return (k + i);
    }else{
        return (k + i) + SomaSerie((i + 1), j, k);
    }
}

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int i, j, k;

    //Lendo valores do intervalor e o incremento.
    printf("Digite o início do intervalo: ");
    scanf("%d", &i);
    printf("Digite o fim do intervalo: ");
    scanf("%d", &j);
    printf("Informr qual o incremento: ");
    scanf("%d", &k);

    //Chamando a função e mostrando resultado.
    printf("\nSoma da série dos valores do intevalo [%d, %d] é: %d\n\n", i, j, SomaSerie(i,j,k));
}