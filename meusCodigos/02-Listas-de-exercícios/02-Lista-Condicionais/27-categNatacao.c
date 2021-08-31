#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 27 - Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:
                __________________________________
                |  CATEGORIA  |       IDADE      |
                | Infantil A  |       5 a 7      |
                | Infantil B  |       8 a 10     |
                |  Juvenil A  |       11 a 13    |
                |  Juvenil B  |       14 a 17    |
                |    Sênior   |maiores de 18 anos|
                ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨*/
void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int idade;

    //Lendo a idade do nadador.
    printf("Informe a idade do nadador: ");
    scanf("%d", &idade);

    //Verificando idade para classificar nadador.
    if(idade >= 5 && idade <= 7){
        printf("\nSe enquadra na categoria INFANTIL A!\n\n");
    }else if(idade >= 8 && idade <= 10){
        printf("\nSe enquadra na categoria INFANTIL B!\n\n");
    }else if(idade >= 11 && idade <= 13){
        printf("\nSe enquadra na categoria JUVENIL A!\n\n");
    }else if(idade >= 14 && idade <= 17){
        printf("\nSe enquadra na categoria JUVENIL B!\n\n");
    }else if(idade >= 18){
        printf("\nSe enquadra na categoria SÊNIOR!\n\n");
    }
}