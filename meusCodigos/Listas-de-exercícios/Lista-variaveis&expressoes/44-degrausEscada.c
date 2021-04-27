#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 44 - Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar
subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir
seu objetivo.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float altDegrau, alturaTotal, qtdDegrau;

    //Lendo altura do degrau e altura que deseja alcançar.
    printf("Digite a altura do degrau: ");
    scanf("%f", &altDegrau);
    printf("Digite a altura que deseja alcançar: ");
    scanf("%f", &alturaTotal);

    //Calculando quantidade de degraus.
    qtdDegrau = alturaTotal / altDegrau;

    //Mostrando resultado na tela.
    printf("\nVocê precisará de %.0f degrau(s).\n", qtdDegrau);
}