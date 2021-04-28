#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 30 - Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente
em dólares.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float real, cotDolar, Dolar;

    //Lendo o valor em real e a contação do dolar.
    printf("Informe o montante em reais: ");
    scanf("%f", &real);
    printf("Agora informe a cotação do dólar: ");
    scanf("%f", &cotDolar);

    //Convertendo real em dolar.
    Dolar = real / cotDolar;

    //Mostrando resultado da conversão.
    printf("Com R$ %.2f você poder ter US$ %.2f.\n", real, Dolar);
}