#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 49 - Faça um programa para leia o horário (hora, minuto e segundo) de inicio e a duração, em
segundos, de uma experiência biológica. O programa deve resultar com o novo horário
(hora, minuto e segundo) do termino da mesma.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int duracao, hora, minut, seg, hora2, minut2, seg2;

    //Lendo valor inteiro em segundos.
    printf("=== INICIO EXPERIÊNCIA BIOLÓGICA ===\n");
    printf("Hora: ");
    scanf("%d", &hora);
    printf("Minuto: ");
    scanf("%d", &minut);
    printf("Segundo: ");
    scanf("%d", &seg);
    printf("DURAÇÃO DA EXPERIÊNCIA (em segundos): ");
    scanf("%d", &duracao);

    /*Transformando o horário informado em segundos, somando com os segundos da duração digitada e calculando horas, minutos e segundos do fim da duração*/
    duracao = duracao + ((hora * 3600) + (minut * 60) + seg);
    hora2 = duracao / 3600;
    minut2 = (duracao % 3600) / 60;
    seg2 = ((duracao % 3600) % 60);
    
    //Mostrando resultado.
    printf("\n=== FINAL EXPERIÊNCIA BIOLÓGICA ===");
    printf("\nHora: %d\nMinuto(s): %d\nSegundo(s): %d\n\n", hora2, minut2, seg2);
}