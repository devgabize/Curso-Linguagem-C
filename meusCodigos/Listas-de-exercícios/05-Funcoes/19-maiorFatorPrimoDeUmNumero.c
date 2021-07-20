#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int maiorFatorPrimo(int num){
    int cont = 0, maiorFator;
    for(int i = 2; i < num; i++){
        for(int j = 1; j <= i; j++){
            if((i % j) == 0){
                cont++;
            }
        }
        if(cont == 2){
            if((num % i) == 0){
                maiorFator = i;
            }
        }
        cont = 0;
    }

    return maiorFator;
}

int main(){
    //Para utilizar acento.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num;

    printf("Digite um valor: ");
    scanf("%d", &num);

    //Chamando a função e mostrando resultado.
    printf("\nO maior fator primo de %d é: %d\n\n", num, maiorFatorPrimo(num));

    //Retorno da função.
    return 0;
}