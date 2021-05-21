#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 43 - Faça um programa que leia um número indeterminado de idades de indivı́duos (pare
quando for informada a idade 0), e calcule a idade média desse grupo.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int idade, soma = 0, cont = 0;

    //Lendo idade e realizando a soma para calculo da média.
    printf("\nDigite as idades e para finalizar o programa digite 0 (ZERO)!\n");
    do{
        printf("Digite a idade: ");
        scanf("%d", &idade);
        if(idade > 0){
            soma += idade;
            cont++;
        }
    }while(idade > 0);

    //Mostrando média das idades.
    printf("\nIDADE MÉDIA DO GRUPO: %d\n\n", (soma / cont));
}