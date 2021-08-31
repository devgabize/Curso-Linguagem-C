#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    //PAra utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int A, *B, **C, ***D;
    B = &A; C = &B; D = &C;
    printf("Digite um valor para A: ");
    scanf("%d", &A);

    printf("\nDobro de A: %d", (*B * 2));
    printf("\nTriplo de A: %d", (**C * 3));
    printf("\nQuádruplo de A: %d\n\n", (***D * 4));

    //Retorno da função
    return 0;
}