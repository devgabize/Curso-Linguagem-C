#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Crie um algoritmo que leia 3 notas e calcule a média entre elas. Se o valor for maior que 7 informe que o aluno foi aprovado, senão foi reprovado.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float not1, not2, not3, media;

    //Lendo as três notas.
    printf("Digite as 3 notas do aluno: ");
    scanf("%f %f %f", &not1, &not2, &not3);

    //Calculando a média.
    media = (not1 + not2 + not3) / 3;

    //Mostrando resultado.
    if(media > 7){
        printf("\n=== ALUNO APROVADO! ===\nMÉDIA: %.1f\n\n", media);
    }else{
        printf("\n=== ALUNO REPROVADO! ===\nMÉDIA: %.1f\n\n", media);
    }
}