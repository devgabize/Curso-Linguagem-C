#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    //Para usar acentos.
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 2 notas e mostre o valor absoluto da diferença entre elas.

    //Definindo variáveis.
    int not1, not2, resultado;

    //Lendo nota 1.
    printf("Digite a primeira nota: ");
    scanf("%d", &not1);

    //Lendo nota 2.
    printf("Digite a segunda nota: ");
    scanf("%d", &not2);

    //Calculando a diferença.
    resultado = not1 - not2;

    //Mostrando o resultado absoluto da diferença.
    printf("O valor absoluto da diferença entre %d e %d é %d\n", not1, not2, abs(resultado));
}

