#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 45 - Faça um algoritmo que converta uma velocidade expressa em km/h para m/s e vice
versa. Você deve criar um menu com as duas opções de conversão e com uma opção para finalizar o programa. O usuário poderá fazer quantas conversões desejar, sendo que o programa só será finalizado quando a opção de finalizar for escolhida.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int opc;
    float vel;

    //Lendo a velocidade, fazendo o cálculo e mostrando na tela.
    do{
        printf("\n--------------------------\n         MENU            \n--------------------------\n");
        printf("1 - Converter Km/h em m/s\n2 - Converter m/s em Km/h\n3 - Sair\n");
        printf("--------------------------\ndigite a opção: ");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                printf("\n======= Convertendo de Km/h em m/s =======\n");
                printf("Digite a velocidade: ");
                scanf("%f", &vel);
                printf("Velocidade convertida: %.2f\n", (vel / 3.6));
                printf("==========================================\n");
                break;
            case 2:
                printf("\n======= Convertendo de m/s em Km/h =======\n");
                printf("Digite a velocidade: ");
                scanf("%f", &vel);
                printf("Velocidade convertida: %.2f\n", (vel * 3.6));
                printf("==========================================\n");
                break;
            case 3:
                printf("\n## PROGRAMA FINALIZADO! ##\n\n");
                break;
        }
    }while(opc != 3);
}