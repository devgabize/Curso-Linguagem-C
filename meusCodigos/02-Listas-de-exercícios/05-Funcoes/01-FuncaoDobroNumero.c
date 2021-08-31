#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int calculaDobro(int a){
    return a * 2;
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    int num;

    printf("Digite um valor: ");
    scanf("%d", &num);

    printf("\nO dobro de %d é: %d\n\n", num, calculaDobro(num));

    //Retorno da função.
    return 0;
}