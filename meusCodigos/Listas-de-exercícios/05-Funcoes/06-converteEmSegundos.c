#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int converteEmSegundos(int hora, int  min, int seg){
    return (hora * 3600) + (min * 60) + seg;
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int hora, min, seg, totalSegundos;

    printf("\nInforme as horas!\n");
    printf("Digite a hora: ");
    scanf("%d", &hora);
    printf("Digite os minutos: ");
    scanf("%d", &min);
    printf("Digite os segundos: ");
    scanf("%d", &seg);

    //Chamando a função.
    totalSegundos = converteEmSegundos(hora, min, seg);

    //Mostrando resultado.
    printf("\nA hora informa convertida em segundos corresponde a: %d\n\n", totalSegundos);
    
    //Retorno da função.
    return 0;
}