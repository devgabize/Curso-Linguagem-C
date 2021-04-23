#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    //Permite usar acentos.
    setlocale(LC_ALL,"");
    printf("Olá!\n\n");

    //Lendo valor inteiro.
    int a = 50;
    printf("O valor de a é = %d \n", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d\n\n", a);

    //Lendo valor quebrado.
    float b = 5.5;
    printf("O valor de b é = %f \n", b);
    scanf("%f", &b);
    printf("O valor de b mudou para %f\n\n", b);

    //Lendo letra.
    char c = 't';
    printf("O valor de c é = %c \n", c);
    fflush(stdin);
    scanf(" %c", &c);
    printf("O valor de c mudou para %c\n\n", c);
}