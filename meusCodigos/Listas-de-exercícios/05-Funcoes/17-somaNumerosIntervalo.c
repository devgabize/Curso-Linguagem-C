#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int somaNumerosIntervalo(int a, int b){
    int soma = 0;
    for(int i = a + 1; i < b; i++){
        soma += i;
    }
    return soma;    
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num1, num2, soma;

    printf("Digite um valor inteiro maior que 0(zero): ");
    scanf("%d", &num1);
    printf("Digite mais um valor inteiro maior que 0(zero): ");
    scanf("%d", &num2);

    //Chamando a função.
    soma = somaNumerosIntervalo(num1, num2);

    //Mostrando resultado.
    printf("\nSoma dos números entre %d e %d é: %d\n\n", num1, num2, soma);

    //Retorno da função.
    return 0;
}