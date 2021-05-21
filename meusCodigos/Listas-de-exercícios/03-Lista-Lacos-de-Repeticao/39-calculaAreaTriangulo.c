#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 39 - Faça um programa que calcule a área de um triângulo, cuja base e altura são fornecidas
pelo usuário. Esse programa não pode permitir a entrada de dados inválidos, ou seja,
medidas menores ou iguais a 0.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int verif = 1;
    float base, altura, area;

    //Lendo base e altura e testando se são válidas.
    do{
        printf("Digite a base: ");
        scanf("%f", &base);
        printf("Digite a altura: ");
        scanf("%f", &altura);
        if(base <= 0 || altura <= 0){
            printf("# \nDADOS INVÁLIDOS! Digite valores MAIORES e DIFERENTES de 0(ZERO) #\n");
        }else{
            verif = 0;
        }
    }while(verif == 1);

    //Calculando a área do triângulo.
    area = (base * altura) / 2.0;

    //Mostrando resultado na tela.
    printf("\nÁREA DO TRIÊNGULO INFORMADO: %.2f\n\n", area);
}