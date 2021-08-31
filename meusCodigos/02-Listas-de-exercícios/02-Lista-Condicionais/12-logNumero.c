#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h> //Para calcular logaritmo utilizando a função log().

/*Questão 12 - Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
inválido”. Se o número for positivo, calcular o logaritmo deste numero.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num;

    //Lendo número inteiro.
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    //Testando número (positivo ou negativo) e calculando logaritmo.
    if(num < 0){
        printf("\nNúmero inválido!\n\n");
    }else{
        printf("\nO logaritmo do número digitado é: %.2f\n\n", log(num));        
    }
}