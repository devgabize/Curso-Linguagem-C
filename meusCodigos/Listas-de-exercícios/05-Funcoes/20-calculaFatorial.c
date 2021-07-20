#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int calculaFatorial(int num){
    int fat = 1;
    for(int i = num; i > 1; i--){
        fat *= i;
    }

    return fat;
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int n;

    printf("\nCÁLCULO DO FATORIAL!\n");
    printf("Digite um valor: ");
    scanf("%d", &n);

    //Chamando a função e mostrando resultado.
    printf("\nFatorial de %d é: %d\n\n", n, calculaFatorial(n));

    //Retorno da função.
    return 0;
}