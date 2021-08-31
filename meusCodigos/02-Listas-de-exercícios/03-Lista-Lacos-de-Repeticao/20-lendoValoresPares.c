#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 20 - Ler uma sequência de números inteiros e determinar se eles são pares ou não. Deverá
ser informado o número de dados lidos e número de valores pares. O processo termina quando for digitado o número 1000.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num, dados = 0, par = 0;

    //Lendo os números inteiros, verificando se são pares e se o número digitado é o fim do programa.
    printf("\n================ CONTANDO NÚMEROS PARES ================\n");
    printf("Instruções:\n1-Digite números inteiros (só não vale o número: 1000);\n2-Para finalizar o programa digite 1000.\n");
    printf("========================================================\n");
    printf("Pode começar a digitar! :D\n\n");
    do{
        printf("Digite o %dº valor: ", (dados + 1));
        scanf("%d", &num);
        if(num != 1000){
            if(num % 2 == 0){
                par++;
            }   
            dados++;
        }else{
            printf("\nFinalizando o programa...\n");
        }    
    }while(num != 1000);
    printf("\n============== RESUMO DA EXECUÇÃO ==============\n");
    printf("-- QTD DE DADOS LIDOS: %d\n-- QTD DE VALORES PARES DIGITADOS: %d", dados, par);
    printf("\n================================================\n");
    printf("\n----- PROGRAMA FINALIZADO! -----\n\n");
}