#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>

/*QUESTÃO 13 - Ler uma frase e contar quantos caracteres são espaços em brancos. Lembre-se que
uma frase é um conjunto de caracteres (vetor).*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    char frase[450];
    int i = 0, qtdEspacos = 0;

    //Lendo a frase.
    printf("Digite uma frase:\n");
    fgets(frase, 450, stdin);

    //Analisando frase digitada.
    while(frase[i] != '\0'){
        if(frase[i] == ' '){
            qtdEspacos++;
        }
        i++;
    }

    //Imprimindo qtd de espaços em branco na frase digitada.
    printf("\nQtd espaços em branco na frase digitada: %d\n\n", qtdEspacos);
}