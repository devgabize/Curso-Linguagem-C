#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 35 - Faça um programa que some os números impares contidos em um intervalo definido
pelo usuário. O usuário define o valor inicial do intervalo e o valor final deste intervalo e o programa deve somar todos os números ı́mpares contidos neste intervalo. Caso o usuário digite um intervalo inválido (começando por um valor maior que o valor final) deve ser escrito uma mensagem de erro na tela, “Intervalo de valores inválido” e o programa termina. Exemplo de tela de saı́da:
Digite o valor inicial e valor final: 5
10
Soma dos ı́mpares neste intervalo: 21*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int valInicio, valFim, soma = 0;

    //Lendo oo intervalo e verificando se é válido.
    printf("Digite o valor inicial e valor final: ");
    scanf("%d %d", &valInicio, &valFim);
    if(valInicio > valFim){
        printf("Intervalo de valores inválido!\n");
    }else{
        for(int i = valInicio; i <= valFim; i++){
            if(i % 2 != 0){
                soma += i;
            }
        }    

        printf("Soma dos ı́mpares neste intervalo: %d\n\n", soma);
    }
}