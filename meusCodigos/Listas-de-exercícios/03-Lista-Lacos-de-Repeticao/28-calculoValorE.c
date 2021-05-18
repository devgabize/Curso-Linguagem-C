#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 28 - Faça um programa que leia um valor N inteiro e positivo, calcule o mostre o valor E,
conforme a fórmula a seguir: E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N !*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int N, i, j, Fat = 1, verif = 0;
    float E = 1.0;

    //Lendo valor inteiro e positivo.
    do{
        printf("Digite um valor inteiro e positivo: ");
        scanf("%d", &N);
        if(N > 0){
            verif = 1;
        }else{
            printf("\n=== NÚMERO INVÁLIDO! Deve ser INTEIRO e POSITIVO! ===\n\n");
        }
    }while(verif == 0);

    //Encontrando o valor de E.
    for(i = 1; i <= N; i++){
        for(j = i; j > 0; j--){
            Fat *= j;
        }
        E += (1.0 / Fat);
        Fat = 1;
    }

    //Mostrando valor de E.
    printf("\n-----------\nVALOR DE E = %.2f\n-----------\n\n", E);
}