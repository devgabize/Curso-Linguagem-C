#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    /*Crie um algoritmo que informe se o valor lido é primo ou não.*/

    //Definindo variáveis.
    int i, valor, aux;

    printf("Digite um valor para saber se ele é primo: ");
    scanf("%d", &valor);

    for(i = 1; i <= valor; i++){
        //Conferindo quantas vezes houve divisibilidade.
        if(valor % i == 0){
            aux++;
        }
    }

    if(aux == 2){
        printf("\nO número é primo!\n");
    }else{
        printf("\nO número não é primo! Pois ele tem %d divisores\n", aux);
    }

}