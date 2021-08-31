#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

struct Complexo{
    float real, imaginaria;
};

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    struct Complexo z, w;

    //Lendo os números complexos.
    printf("----- NÚMEROS COMPLEXOS -----\n");
    printf("1º NÚMERO (Z)\n-------------\n");
    printf("Parte real: ");
    scanf("%f", &z.real);
    printf("Parte imaginária: ");
    scanf("%f", &z.imaginaria);
    printf("\n2º NÚMERO (W)\n-------------\n");
    printf("Parte real: ");
    scanf("%f", &w.real);
    printf("Parte imaginária: ");
    scanf("%f", &w.imaginaria);

    //Mostrando resultado das operações.
    printf("\n------- OPERAÇÕES SIMPLES -------\n");
    printf("SOMA: %.1f ", (z.real + w.real));
    if((z.imaginaria + w.imaginaria) > 0.0){
        printf("+ %.1fi", (z.imaginaria + w.imaginaria));
    }else if((z.imaginaria + w.imaginaria) < 0.0){
        printf("- %.1fi", ((z.imaginaria + w.imaginaria) * (-1.0)));
    }
    printf("\nSUBTRAÇÃO: %.1f ", (z.real - w.real));
    if((z.imaginaria - w.imaginaria) > 0.0){
        printf("+ %.1fi", (z.imaginaria - w.imaginaria));
    }else if((z.imaginaria - w.imaginaria) < 0.0){
        printf("- %.1fi", ((z.imaginaria - w.imaginaria) * (-1.0)));
    }
    printf("\nPRODUTO: %.1f ", ((z.real * w.real) - (z.imaginaria * w.imaginaria)));
    if(((z.real * w.imaginaria) + (z.imaginaria * w.real)) > 0.0){
        printf("+ %.1fi", ((z.real * w.imaginaria) + (z.imaginaria * w.real)));
    }else if(((z.real * w.imaginaria) + (z.imaginaria * w.real)) < 0.0){
        printf("- %.1fi", (((z.real * w.imaginaria) + (z.imaginaria * w.real)) * (-1.0)));
    }
    printf("\nMÓDULO DE Z: %.1f\n", sqrt(pow(z.real, 2) + pow(z.imaginaria, 2)));
    printf("MÓDULO DE W: %.1f\n", sqrt(pow(w.real, 2) + pow(w.imaginaria, 2)));
    printf("---------------------------------\n\n");
}