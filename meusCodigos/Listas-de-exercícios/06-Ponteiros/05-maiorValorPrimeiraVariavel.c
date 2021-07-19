#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void maiorValorePrimeiraVariavel(int *num1, int *num2){
    int aux;
    if(*num2 > *num1){
        aux = *num1;
        *num1 = *num2;
        *num2 = aux;
    }
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int var1, var2;

    printf("Digite um valor para Var1: ");
    scanf("%d", &var1);
    printf("Digite um valor para Var2: ");
    scanf("%d", &var2);

    //Chamando a função.
    maiorValorePrimeiraVariavel(&var1, &var2);

    //Mostrando valores invertidos.
    printf("\nValor de A: %d", var1);
    printf("\nValor de B: %d\n\n", var2);

    //Retorno da função.
    return 0;
}