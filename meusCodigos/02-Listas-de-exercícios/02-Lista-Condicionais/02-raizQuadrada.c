#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h> //Para calcular a raiz utilizando a função sqrt().

/*Questão 02 - Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz
quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float num;

    //Lendo o valor.
    printf("Digite um número: ");
    scanf("%f", &num);

    if(num > 0){
        printf("Raiz quadrada do número %.2f é: %.2f\n", num, sqrt(num));
    }else{
        printf("O NÚMERO DIGITADO É INVÁLIDO PARA CALCULAR RAIZ QUADRADA!\n");
    }
}