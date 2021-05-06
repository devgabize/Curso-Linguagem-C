#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 41 - Faça um algoritmo que calcule o IM C de uma pessoa e mostre sua classificação de
acordo com a tabela abaixo:
                        ______________________________________________
                        |     IMC     |      CLASSIFICAÇÃO           |
                        | < 18,5      | Abaixo do peso               |  
                        | 18,6 - 24,9 | Saudável                     |
                        | 25,0 - 29,9 | Peso em excesso              |
                        | 30,0 - 34,9 | Obesidade Grau I             |
                        | 35,0 - 39,9 | Obesidade Grau II (severa)   |
                        | >= 40,0     | Obesidade Grau III (mórbida) |
                        ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨*/
void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float altura, peso, imc;

    //Lendo altura e peso;
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    printf("Informe seu peso: ");
    scanf("%f", &peso);

    //calculando IMC.
    imc = peso / (altura * altura);

    //Analisando IMC.
    if(imc < 18.5){
        printf("\n============== IMC: %.1f ==============\n", imc);
        printf("            Abaixo do peso!\n");
        printf("=======================================\n");
    }else if(imc >= 18.6 && imc <= 24.9){
        printf("\n============== IMC: %.1f ==============\n", imc);
        printf("              Saudável!\n");
        printf("=======================================\n");    
    }else if(imc >= 25.0 && imc <= 29.9){
        printf("\n============== IMC: %.1f ==============\n", imc);
        printf("          Peso em excesso!\n");
        printf("=======================================\n");    
    }else if(imc >= 30.0 && imc <= 34.9){
        printf("\n============== IMC: %.1f ==============\n", imc);
        printf("            Obesidade Grau I!\n");
        printf("=======================================\n");    
    }else if(imc >= 35.0 && imc <= 39.9){
        printf("\n============== IMC: %.1f ==============\n", imc);
        printf("       Obesidade Grau II (severa)\n");
        printf("=======================================\n");    
    }else{
        printf("\n============== IMC: %.1f ==============\n", imc);
        printf("       Obesidade Grau III (mórbida)\n");
        printf("=======================================\n");
    }
}