#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void somaValoresModificaPrimeiraVariavel(int *num1, int *num2){
    int soma = 0;
    soma = *num1 + *num2;
    *num1 = soma;
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    //Chamando a função.
    somaValoresModificaPrimeiraVariavel(&A, &B);

    //Mostrando resultado.
    printf("\nVALORES DAS VARIÁVEIS A & B\nA = %d\nB = %d\n\n", A, B);

    //Retorno da função.
    return 0;
}