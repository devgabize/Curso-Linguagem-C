#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 52 - Escreva um programa que receba como entrada o valor do saque realizado pelo cliente
de um banco e retorne quantas notas de cada valor serão necessárias para atender ao saque com a menor quantidade de notas possı́vel. Serão utilizadas notas de 100, 50, 
20, 10, 5, 2 e 1 real.*/

void main(){
    //Para utilizar acento.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float valSaque, saque, nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0, nota1 = 0;

    //Lendo valor do saque.
    printf("Informe o valor do saque R$");
    scanf("%f", &valSaque);

    //Determinando a qtd de notas para o saque.
    do{
        if(valSaque >= 100.0){
            nota100 ++;
            valSaque -= 100.0; 
        }else if(valSaque >= 50.0){
            nota50 ++;
            valSaque -= 50.0;
        }
        else if(valSaque >= 20.0){
            nota20 ++;
            valSaque -= 20.0;
        }else if(valSaque >= 10.0){
            nota10 ++;
            valSaque -= 10.0;
        }else if(valSaque >= 5.0){
            nota5 ++;
            valSaque -= 5.0;
        }else if(valSaque >= 2.0){
            nota2 ++;
            valSaque -= 2.0;
        }else if(valSaque >= 1.0){
            nota1 ++;
            valSaque -= 1.0;
        }     
    }while(valSaque > 0.0);

    printf("\n======= RESUMO SAQUE =======\nQTD DE NOTAS:\n---------------\n");
    printf("R$ 100,00: %.0f notas\n", nota100);
    printf("R$ 50,00: %.0f notas\n", nota50);
    printf("R$ 20,00: %.0f notas\n", nota20);
    printf("R$ 10,00: %.0f notas\n", nota10);
    printf("R$ 5,00: %.0f notas\n", nota5);
    printf("R$ 2,00: %.0f notas\n", nota2);
    printf("R$ 1,00: %.0f notas\n", nota1);
    printf("\n============================\n\n");
}