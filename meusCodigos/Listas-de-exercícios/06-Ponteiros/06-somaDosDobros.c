#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int modificaValoresSomaDobros(int *num1, int *num2){
    *num1 = *num1 * 2;
    *num2 = *num2 * 2;
    return *num1 + *num2;
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int A, B, soma;

    printf("Digite um valor para A: ");
    scanf("%d", &A);
    printf("Digite um valor para B: ");
    scanf("%d", &B);

    //Chamando a função.
    soma = modificaValoresSomaDobros(&A, &B);

    //Mostrando resultado.
    printf("\nSoma dos dobros dos números lidos: %d\n\n", soma);
   
    //Retorno da função.
    return 0;
}