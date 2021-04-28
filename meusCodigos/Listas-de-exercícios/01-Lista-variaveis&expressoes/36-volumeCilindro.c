#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/*Questão 36 - Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
de um cilindro circular é calculado por meio da seguinte fórmula: V = π ∗ raio2 ∗ altura, onde 
π = 3.141592.*/

void main(){
    //Para usar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float pi, raio, altura, V;

    //Definindo valor de pi.
    pi = 3.141592;

    //Lendo altura e raio do cinlindro.
    printf("Informe a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Agora informe o raio do cilindro: ");
    scanf("%f", &raio);

    //Calculando volume do cilindro.
    V = pi * pow(raio,2) * altura;

    //Mostrando o volume na tela.
    printf("\nVolume do cilindro: %.2f\n\n", V);
}