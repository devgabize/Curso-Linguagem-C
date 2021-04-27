#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 48 - Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num, seg, hora, minut;

    //Lendo valor inteiro em segundos.
    printf("Informe os segundos: ");
    scanf("%d", &num);

    //Calculando horas, minutos e segundos.
    hora = num / 3600;
    minut = (num % 3600) / 60;
    seg = ((num % 3600) % 60);


    //Mostrando resultado.
    printf("\nHora: %d\nMinuto(s): %d\nSegundo(s): %d\n\n", hora, minut, seg);
}