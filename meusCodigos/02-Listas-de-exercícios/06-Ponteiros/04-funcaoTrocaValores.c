#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void inverteValores(int *num1, int *num2){
    int aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int a, b;

    printf("Digite um valor para A: ");
    scanf("%d", &a);
    printf("Digite um valor para B: ");
    scanf("%d", &b);

    //Chamando a função.
    inverteValores(&a, &b);

    //Mostrando valores invertidos.
    printf("\nValor de A: %d", a);
    printf("\nValor de B: %d\n\n", b);

    //Retorno da função.
    return 0;
}