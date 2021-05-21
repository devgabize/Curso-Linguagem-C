#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

/*QUESTÃO 46 - Faça um programa que gera um número aleatório de 1 a 1000. O usuário deve tentar
acertar qual o número foi gerado, a cada tentativa o programa deverá informar se o chute é menor ou maior que o número gerado. O programa acaba quando o usuário acerta o número gerado. O programa deve informar em quantas tentativas o número foi descoberto.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Para número aleatório.
    srand((unsigned)time(NULL));

    //Definindo variáveis.
    int aleatorio = 1 + (rand() % 1000), tent, cont = 0;

    //Lendo a tentativa e verificando se está correta.
    printf("\n====== Tente advinhar o número secreto ======\n");    
    do{
        printf("Digite seu palpite: ");
        scanf("%d", &tent);
        cont++;
        if(tent != aleatorio){
            if(tent > aleatorio){
                printf("O número secreto é menor que %d! Tente novamente!\n", tent);
            }else if(tent < aleatorio){
                printf("O número secreto é maior que %d! Tente novamente!\n", tent);
            }
        }   
    }while(tent != aleatorio);

    printf("\n### PARABÉNS! VOCÊ DESCOBRIU O NÚMERO SECRETO APÓS %d TENTATIVAS! ###\n---- FIM DE JOGO! ----\n\n", cont);
}