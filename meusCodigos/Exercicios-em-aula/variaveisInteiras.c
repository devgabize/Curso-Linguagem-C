#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Funçao principal do programa.
void main(){
    setlocale(LC_ALL,"");

    //Definindo uma variável.
    int a = 5, b;

    //Imprimindo a variável "a".
    printf("%d", a);

    //Concatenando.
    printf("\nO valor da var a é: %d", a);

    //Mudando o valor de "a".
    a = 15;

    //Concatenando.
    printf("\nO valor da var a é: %d\n", a);

    //Lendo valores
    scanf("%d", &b);

    //Concatenando.
    printf("\nO valor da var b é: %d", b);

    //Pula linhas.
    printf("\n");

    //Imprimindo.
    printf("Uhuuu\n");

    //Pausando.
    system("pause");
}