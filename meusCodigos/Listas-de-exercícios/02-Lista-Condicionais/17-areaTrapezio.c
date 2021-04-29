#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 17 - Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:             A = ((basemaior + basemenor) * altura) / 2. Lembre-se a base maior e a base menor devem ser números maiores que zero.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float baseMaior, baseMenor, altura, area;

    //Lendo as bases do trapézio e a altura.
    printf("Digite a base maior do trapézio: ");
    scanf("%f", &baseMaior);
    printf("Digite a base menor do trapézio: ");
    scanf("%f", &baseMenor);
    printf("Digite a altura do trapézio: ");
    scanf("%f", &altura);

    if(baseMaior > 0 && baseMenor > 0){
        //Calculando área do trapézio e mostrando resultado.
        area = ((baseMaior + baseMenor) * altura) / 2;
        printf("\nA área do trapézio é: %.2f\n\n", area);
    }else{
        printf("### VALORES INVÁLIDOS! BASE MAIOR E BASE MENOR DEVEM SER VALORES POSITIVOS ###\n\n");
    }    
}