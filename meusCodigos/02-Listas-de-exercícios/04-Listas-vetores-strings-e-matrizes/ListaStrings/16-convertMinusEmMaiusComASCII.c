#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>

/*QUESTÃO 16 - Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica:
subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    char cadeia[60];
    int i = 0, numCarac;

    //Lendo cadeia de caracteres.
    printf("Digite uma sequência de caracteres minusculos: ");
    fgets(cadeia, 60, stdin);

    //Analisando string.
    while(cadeia[i] != '\0'){
        numCarac = cadeia[i];
        if(numCarac >= 97 && numCarac <= 122){
            numCarac -= 32;
            cadeia[i] = numCarac;
        }
        i++;
    }

    //Imprimindo string minúscula.
    printf("\nSequência digitada em MAIÚSCULO: %s\n\n", cadeia);

}