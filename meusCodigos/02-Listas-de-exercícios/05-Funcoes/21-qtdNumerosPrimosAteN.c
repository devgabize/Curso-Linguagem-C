#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void quantidadeNumerosPrimosAteN(int num){
    int qtd = 0, cont = 0;
    for(int i = 2; i < num; i++){
        for(int j = 1; j <= i; j++){
            if((i % j) == 0){
                cont++;
            }
        }
        if(cont == 2){
            qtd++;
        }
        cont = 0;
    }

    printf("\nQtd de números primos até %d = %d\n\n", num, qtd);
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int N;

    printf("Digite um valor: ");
    scanf("%d", &N);

    //Chamando a função.
    quantidadeNumerosPrimosAteN(N);

    //Retorno da função.
    return 0;
}