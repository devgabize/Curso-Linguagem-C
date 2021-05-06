#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 35 - Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não bissextos.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int dia, mes, ano;

    //Lendo a data.
    printf("\n======= DATA =======\n");
    printf("Digite o dia (dd): ");
    scanf("%d", &dia);
    printf("Digite o mês (mm): ");
    scanf("%d", &mes);
    printf("Digite o ano (aaaa): ");
    scanf("%d", &ano);
    printf("\n\n===== DATA DIGITADA =====\n");
    printf("     %d / %d / %d \n", dia, mes, ano);
    printf("=========================\n");

    if(mes >= 1 && mes <= 12){
        if((ano % 400) == 0 || (ano % 4) == 0 && (ano % 100) != 0){
            if(mes == 2 && dia >= 1 && dia <= 29){
                printf("\n----- DATA VÁLIDA! -----\n\n");
            }
            else if(mes == 2 && dia >= 1 && dia > 29){
                printf("\n----- DATA INVÁLIDA! Como é ano bissexto, o mês só possui 29 dias -----\n\n");
            }
        }else{
                if(mes == 2 && dia >= 1 && dia <= 28){
                    printf("\n----- DATA VÁLIDA! -----\n\n");
                }
                else if(mes == 2 && dia >= 1 && dia > 28){
                printf("\n----- DATA INVÁLIDA! Como ano não é bissexto, o mês só possui 28 dias -----\n\n");
                }
        }
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
            if(dia >= 1 && dia <= 31){
                printf("\n----- DATA VÁLIDA! -----\n\n");  
            }else{
                printf("\n----- DATA INVÁLIDA! Mês possui 31 dias! -----\n\n");    
            }      
        }
        else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
            if(dia >= 1 && dia <= 30){
                printf("\n----- DATA VÁLIDA! -----\n\n");  
            }else{
                printf("\n----- DATA INVÁLIDA! Mês possui 30 dias! -----\n\n");    
            }    
        }            
    }else{
        printf("\n--- DATA INVÁLIDA! O ano possui apenas 12 meses! --- \n\n");
    }

}