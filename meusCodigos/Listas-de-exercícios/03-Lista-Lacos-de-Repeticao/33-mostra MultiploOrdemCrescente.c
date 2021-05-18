#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 33 - Dados n e dois números inteiros positivos, i e j, diferentes de 0, imprimir em ordem
crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos. Exemplo:
Para n = 6, i = 2 e j = 3 a saı́da deverá ser: 0,2,3,4,6,8.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int n, i, j, verif = 1, cont = 1, num = 0;

    //Lendo n e os dois número inteiros positivos i e j.
    do{
        printf("Informe a qtd de múltiplos que deseja encontrar: ");
        scanf("%d", &n);
        printf("Informe dois números inteiros e positivos para encontrar os múltiplos: ");
        scanf("%d %d", &i, &j);
        if(n > 0 && i > 0 && j > 0){
            verif = 0;
        }else{
            printf("\nNÚMERO INVÁLIDO! Deve ser inteiro e positivo!\nDigite novamente!\n\n");
        }
    }while(verif == 1);    

    //Encontrando os múltiplos e mostrando na tela.
    printf("\n--------------\nMÚLTIPLOS: ");
    while(cont <= n){
        if(num % i == 0 || num % j == 0){
           if(cont < n){
               printf("%d, ", num);
           }else{
               printf("%d.\n--------------\n\n", num);   
           }
           cont++;
        }
        num++;
    }
}