#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 07 - Crie um programa que compara duas strings (não use a função strcmp).*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int i = 0, verif = 0, indiceFim;
    char palavra1[20], palavra2[20];

    //Lendo as strings.
    printf("Digite uma palavra: ");
    scanf("%s", &palavra1);
    printf("Digite outra palavra: ");
    scanf("%s", &palavra2);

    //Comparando strings.
    while(verif == 0){
        //Para testar em qual indice termina uma das palavras.
        if(palavra1[i] == '\0' || palavra2[i] == '\0'){
            //muda a condição para parar a estrutura de repetição.
            verif = 1;
            //Guarda o índice que o fim de uma das strings foi encontrado.
            indiceFim = i;
        }
        i++;
    }

    //Se elas forem iguais no indice encontrado, ambas terão o mesmo conteúdo.
    if(palavra1[indiceFim] == '\0' && palavra2[indiceFim] == '\0'){
        printf("\nPalavras são iguais!\n\n");
    }else{
        printf("\nPalavras não são iguais!\n\n");   
    }

}