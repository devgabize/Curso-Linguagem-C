#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Responsável por alimentar o rand de forma diferente.
    srand((unsigned)time(NULL));

    //Variável que recebe o resto da divisão do número por 3 (aleatório entre 0 e 2);
    int aleatorio = rand() % 3;

    //Imprime o valor.
    printf("Aleatorio 1: %d\n", aleatorio);

    //Variável que recebe o resto da divisão do número por 5 (aleatório entre 1 e 5);
    int aleatorioSegundo = (rand() % 5) + 1;

    //Imprime o valor.
    printf("Aleatorio 2: %d\n", aleatorioSegundo);

    //Embaralhando de novo.
    aleatorioSegundo = (rand() % 5) + 1;

    //Imprime o valor.
    printf("Aleatorio 3(embaralhado de novo): %d\n", aleatorioSegundo);
}