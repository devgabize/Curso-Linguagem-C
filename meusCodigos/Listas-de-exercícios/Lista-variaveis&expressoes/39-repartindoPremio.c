#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 39 - A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
Sendo que da quantia total:
• O primeiro ganhador receberá 46%;
• O segundo receberá 32%;
• O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float primeiro, segundo, terceiro, valorPremio;

    //Definindo valor do premio.
    valorPremio = 780000.00;

    //Calculando partes do prêmio.
    primeiro = valorPremio * 0.46;
    segundo = valorPremio * 0.32;
    terceiro = valorPremio - (primeiro + segundo);

    //Mostrando resultado na tela.
    printf("O primeiro receberá R$%.2f\nO segundo receberá R$%.2f\nO terceiro receberá R$%.2f\n", primeiro, segundo, terceiro);
}