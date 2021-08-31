#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void frac(float num, int *inteiro, float *fracionario){
    *inteiro = (int)num;
    *fracionario = num - *inteiro;
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float fracionario, num;
    int inteiro;

    printf("Digite um valor: ");
    scanf("%f", &num);

    //Chamando a função.
    frac(num, &inteiro, &fracionario);

    //Mostrando resultado.
    printf("\nValor digitado: %.2f\nParte Inteira: %d\nParte fracionária: %.2f\n\n", num, inteiro, fracionario);

    //Retorno da função.
    return 0;
}