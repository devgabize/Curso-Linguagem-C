#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

/*QUESTÃO 17 - Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os
espaços em branco do vetor e depois escrever o vetor resultante.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    char frase[600];
    int j = 0;

    //Lendo frase.
    printf("Digite uma frase:\n");
    fgets(frase, 600, stdin);

    char aux[strlen(frase)];

    //Copiando a frase para aux sem espaços.
    for(int i = 0; i < strlen(frase); i++){
        if(frase[i] != ' '){
            aux[j] = frase[i];
            j++;
        }
    } 

    printf("\nAux = %s\n\n", aux);

    //Copiando aux sem espaços para frase.
    for(int i = 0; i < strlen(frase); i++){
        frase[i] = aux[i];
    }  


    printf("\nFrase digitada sem espaços: %s\n\n", frase);
}