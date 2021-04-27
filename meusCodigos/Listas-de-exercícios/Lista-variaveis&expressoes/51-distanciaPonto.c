#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>

/*Questão 51 - Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua
distância da origem (0, 0).*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float x, y, dist;

    //Lendo as coordenadas do ponto.
    printf("Informe as coordenadas x e y do ponto: ");
    scanf("%f %f", &x, &y);

    //Calculando distância.
    dist = sqrt(pow((x - 0),2) + pow((y - 0),2));

    //Mostrando distância na tela.
    printf("A distância do ponto (%.1f; %.1f) da origem (0; 0) é: %.1f\n\n", x, y, dist);
}