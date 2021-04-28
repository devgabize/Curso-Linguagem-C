#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    //Para usar acentos.
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 2 notas e mostre a méia entre elas.
    
    //Declarando Variáveis.
    float not1,not2, media;

    //Lendo as notas.
    printf("Informe a primeira nota: ");
    scanf("%f", &not1);
    printf("Informe a segunda nota: ");
    scanf("%f", &not2);

    //Calculando a média.
    media = (not1 + not2) / 2;

    //Mostrando resultado.
    printf("\nA média entre as notas é: %.1f\n", media);
}