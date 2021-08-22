#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

struct Polares{
    float r, a;
};

struct Cartesiana{
    float x, y;
};

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    struct Polares ponto1;
    struct Cartesiana ponto2;

    //Lendo o ponto em coordenadas polares.
    printf("\n---- COORDENADAS POLARES ----\n");
    printf("Digite o raio: ");
    scanf("%f", &ponto1.r);
    printf("Digite o ângulo em radianos: ");
    scanf("%f", &ponto1.a);

    //Calculando coordenadas no plano cartesiano.
    ponto2.x = ponto1.r * cos(ponto1.a);
    ponto2.y = ponto1.r * sin(ponto1.a);

    //Mostrando resultado.
    printf("\nPonto gerado no plano cartesiano: (%.1f; %.1f)\n\n", ponto2.x, ponto2.y);
}