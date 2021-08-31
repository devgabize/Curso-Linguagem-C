#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int maiorValorDigitado(int num1, int num2){
    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
} 

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int a, b;

    printf("Digite um valor: ");
    scanf("%d", &a);
    printf("Digite um valor: ");
    scanf("%d", &b);

    //Mostrando resultado.
    printf("\nMaior valor digitado: %d\n\n", maiorValorDigitado(a, b));

    //Retorno da função.
    return 0;
}