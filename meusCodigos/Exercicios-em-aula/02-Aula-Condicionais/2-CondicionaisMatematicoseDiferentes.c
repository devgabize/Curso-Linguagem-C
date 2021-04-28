#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int a = 5, b = 10, c = 15;
    char d = 'x';

    //Maior.
    if(a > 2){
        printf("\n %d é maior que 2\n", a);
    }

    //Maior ou Igual.
    if(c >= b){
        printf("%d é maior ou igual que %d\n", c, b);
    }

    //Menor
    if(a < 10){
        printf("%d é menor que 10\n", a);
    }

    //Menor ou igual.
    if(a <= 10){
        printf("%d é menor ou igual a 10\n", a);
    }

    //Diferente.
    if(c != 10){
        printf("%d não é 10\n", c);
    }
    if(d != 'a'){
        printf("%c não é a.\n", d);
    }
}