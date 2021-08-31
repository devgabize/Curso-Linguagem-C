#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 60 - Faça um programa que leia vários números, calcule e mostre:
    (a) A soma dos números digitados
    (b) A quantidade de números digitados
    (c) A média dos números digitados
    (d) O maior número digitado
    (e) O menor número digitado
    (f) A média dos números pares
Finalize a entrada de dados caso o usuário informe o valor 0.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int num, soma = 0, maior, menor, somaPar = 0, qtdPar = 0, qtd = 1;

    //Lendo vários números.
    printf("Digite quantos números quiser e para finalizar digite 0 (zero).\n");
    printf("Digite: ");
    scanf("%d", &num);
    maior = num;
    menor = num;
    soma += num;
    do{
        printf("Digite: ");
        scanf("%d", &num);
        if(num != 0){
            soma += num;
            qtd++;
            if(num > maior){
                maior = num;
            }else if(num < menor){
                menor = num;
            }
            if((num % 2) == 0){
                somaPar += num;
                qtdPar++; 
            }
        }else{
            printf("\n### PROGRAMA FINALIZADO! ###\n\n");
        } 
    }while(num !=0);

    //Mostrando resultados.
    printf("\n--------------------\n       RESUMO      \n--------------------\n");
    printf("Soma nº digitados: %d\n", soma);
    printf("Qtd nº digitados: %d\n", qtd);
    printf("Média nº digitados: %d\n", (soma / qtd));
    printf("Maior nº digitados: %d\n", maior);
    printf("Menor nº digitados: %d\n", menor);
    printf("Média nº pares digitados: %d\n--------------------\n\n", (somaPar / qtdPar));
}