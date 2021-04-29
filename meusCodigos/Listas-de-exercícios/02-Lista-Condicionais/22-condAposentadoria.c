#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*Questão 22 - Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
aposentar. As condições para aposentadoria são:
• Ter pelo menos 65 anos,
• Ou ter trabalhado pelo menos 30 anos,
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int idade, tempServ;

    //Lendo idade e tempo de serviço.
    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);
    printf("Digite o tempo de serviço do trabalhador: ");
    scanf("%d", &tempServ);

    //Analisando informações digitadas e mostrando resultado.
    if(idade >= 65 || tempServ >= 30){
        printf("\nTRABALHADOR JÁ PODE SE APOSENTAR!\n\n");
    }else if(idade >= 60 && tempServ >= 25){
        printf("\nTRABALHADOR JÁ PODE SE APOSENTAR!\n\n");
    }else{
        printf("\nTRABALHADOR NÃO PODE SE APOSENTAR!\n\n");     
    }
}