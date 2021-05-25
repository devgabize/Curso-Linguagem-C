#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>

/*QUESTÃO 15 - Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em
letras minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    char cadeia[60];
    int i = 0, numCarac;

    //Lendo cadeia de caracteres.
    printf("Digite uma sequência de caracteres MAIÚSCULOS: ");
    fgets(cadeia, 60, stdin);

    //Analisando string.
    while(cadeia[i] != '\0'){
        numCarac = cadeia[i];
        if(numCarac >= 65 && numCarac <= 90){
            numCarac += 32;
            cadeia[i] = numCarac;
        }
        i++;
    }

    //Imprimindo string minúscula.
    printf("\nSequência digitada em minúsculo: %s\n\n", cadeia);

}