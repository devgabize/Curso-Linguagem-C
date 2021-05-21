#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*QUESTÃO 55 - Escreva um programa que leia um inteiro não negativo n e imprima a soma dos n primei-
ros números primos.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int n, soma = 0, div = 0, i = 1, primo = 1;

    //Lendo o número inteiro e verificando se é maior que 1.
    do{
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &n);
        if(n <= 0){
            printf("\n### ERROR: NÚMERO DEVE SER POSITIVO E DE PREFERÊNCIA MAIOR QUE 0(ZERO)! Digite novamente! ###\n\n");
        }
    }while(n <= 0);

    //Verificando se é número primo e fazendo soma.
    do{
        //Procurando os divisores.
        for(int j = 1; j <= i; j++){
            if((i % j) == 0){
                div++;
            }
        }
        //Realizando a soma caso o número representado por i seja primo.
        if(div == 2){
            soma += i;
            primo++;
        }
        //Zerando div para o próximo teste.
        div = 0;
        //Gerando um novo número para testar se é primo.
        i++;
    }while(primo <= n);  

    //Mostrando resultado.
    printf("\nSoma dos %d primeiros números primos: %d!\n\n", n, soma);  
}