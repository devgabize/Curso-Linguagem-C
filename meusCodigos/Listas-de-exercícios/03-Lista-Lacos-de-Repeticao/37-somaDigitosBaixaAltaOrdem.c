#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/*QUESTÃO 37 - Escreve um programa que verifique quais números entre 1000 e 9999 (inclusive) pos-
suem a propriedade seguinte: a soma dos dois dı́gitos de mais baixa ordem com os dois
dı́gitos de mais alta ordem elevada ao quadrado é igual ao próprio numero. Por exemplo,
para o inteiro 3025, temos que:
                                    30 + 25 = 55
                                    55 2 = 3025*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int i, digAlta, digBaixa;

    //Encontrando os número com a propriedade e mostrando na tela.
    printf("\n");
    for(i = 1000; i <= 9999; i++){
        digAlta = i / 100;
        digBaixa = i % 100;
        if(pow((digAlta + digBaixa), 2) == i){
            printf(" %d\n", i);
        }
    }
    printf("\n");
}