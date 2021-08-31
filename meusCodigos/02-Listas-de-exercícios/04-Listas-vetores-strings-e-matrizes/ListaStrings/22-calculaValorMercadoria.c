#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 22 - Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o
desconto para pagamento à vista é de 10% sobre o valor total, calcular o valor a ser
pago à vista. Escrever o nome da mercadoria, o valor total, o valor do desconto e o valor
a ser pago à vista.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    char mercad[50];
    float valMercad, avista;

    //Lendo o nome da marcadoria e o valor.
    printf("Informe o nome da mercadoria: ");
    fgets(mercad, 50, stdin);
    printf("Digite o valor: ");
    scanf("%f", &valMercad);

    avista = valMercad * (1.0 - (10.0 / 100.0));

    //Imprimindo resultado na tela.
    printf("\n==============================\n");
    printf("%s\nVALOR TOTAL: %.2f\nDESCONTO: %.2f\nVALOR À VISTA: %.2f", mercad, valMercad, (valMercad * (10.0 / 100.0)), avista);
    printf("\n==============================\n\n");
}