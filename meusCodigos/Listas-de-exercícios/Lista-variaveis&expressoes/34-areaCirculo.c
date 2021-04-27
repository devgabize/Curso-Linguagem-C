#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/*Questão 34 - Leia o valor do raio de um cı́rculo e calcule e imprima a área do cı́rculo correspondente. A área do cı́rculo é π ∗ raio2 , considere π = 3.141592.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float pi, raio, area;

    //Definino valor de pi.
    pi = 3.141592;

    //Lendo valor do raio.
    printf("Informe o valor do raio do círculo: ");
    scanf("%f", &raio);

    //Calculando área do círculo.
    area = pi * pow(raio,2);

    //Mostrando resultado na tela.
    printf("\nRaio informado: %.2f\nÁrea do circulo: %.2f\n\n", raio, area);
}