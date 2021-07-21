#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int negativosNoArray(int *vet, int N){
    int qtd = 0;
    for(int i = 0; i < N; i++){
        if(*vet < 0){
            qtd++;
        }
        vet++;
    }

    return qtd;
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int vet[5] = {-5,2,-15,3,-7};

    //Chamando a função e mostrando resultado.
    printf("\nQtd de números negativos: %d\n\n", negativosNoArray(vet, 5));

    //Retorno da função.
    return 0;
}