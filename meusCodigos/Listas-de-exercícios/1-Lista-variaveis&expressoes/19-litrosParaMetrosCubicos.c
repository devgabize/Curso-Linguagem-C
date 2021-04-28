#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 19 - Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m 3 . A
fórmula de conversão é: M =  L / 1000, sendo L o volume em litros e M o volume em metros
cúbicos.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float L;

    //Lendo volume em litros.
    printf("Informe o volume em litros (L): ");
    scanf("%f", &L);

    //Fazendo conversão ao mostrar resultado na tela.
    printf("O volume informado em metros cúbicos corresponde a: %.1f m3\n", (L / 1000));
}