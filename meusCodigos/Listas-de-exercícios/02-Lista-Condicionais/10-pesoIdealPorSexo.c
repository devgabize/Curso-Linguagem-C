#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 10 - Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
    • Homens: (72.7 ∗ h) − 58
    • Mulheres: (62, 1 ∗ h) − 44, 7*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float h;
    char sexo;

    //Lendo altura e sexo.
    printf("Digite sua altura: ");
    scanf("%f", &h);
    printf("Informe seu sexo (h ou m): ");
    scanf(" %c", &sexo);

    //Calculando peso ideal e ostrando na tela.
    if(sexo == 'h'){
        printf("\nSeu peso ideal é: %.2f Kg.\n\n", ((72.7 * h) - 58));
    }else if(sexo == 'm'){
        printf("\nSeu peso ideal é: %.2f Kg.\n\n", ((62.1 * h) - 44.7));
    }else{
        printf("\nSEXO INFORMADO É INVÁLIDO! REVEJA O MENU!\n\n");
    }
}