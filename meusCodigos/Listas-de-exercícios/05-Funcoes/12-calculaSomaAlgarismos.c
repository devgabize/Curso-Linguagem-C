#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void somaAlgarismo(int num){
    int soma = 0;
    if(num > 0){
        soma += (num / 1000);
        num = num % 1000;
        soma += (num / 100);
        num = num % 100; 
        soma += (num / 10);
        num = num % 10;
        soma += num;
        printf("\nSOMA DOS ALGARISMOS: %d\n\n", soma);
    }else{
        printf("\nNÚMERO INVÁLIDO!\n\n");
    }
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num;

    printf("Digite um valor maior que 0(zero): ");
    scanf("%d", &num);

    //Chamando a função.
    somaAlgarismo(num);

    //Retorno da função.
    return 0;
}