#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃ0 50 - Chico tem 1.50 metro e cresce 2 centı́metros por ano, enquanto Zé tem 1.10 metros e
cresce 3 centı́metros por ano. Escreva um programa que calcule e imprima quantos anos
serão necessários para que Zé seja maior que Chico.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int qtdAnos = 0;
    float altChico = 1.50, altZe = 1.10;

    //Analisando crescimento.
    do{
        altChico += 0.02;
        altZe += 0.03;
        qtdAnos++;
    }while(altZe <= altChico);

    //Mostrando resultado na tela.
    printf("\nQtd de anos necessário para Zé ser maior que Chico: %d anos\n\n", qtdAnos);
}