#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*QUESTÃO 59 - Escreva um programa que leia o número de habitantes de uma determinada cidade, o
valor do kwh, e para cada habitante entre com os seguintes dados: consumo do mês e o código do consumidor (1-Residencial, 2-Comercial, 3-Industrial). No final imprima o maior, o menor e a média do consumo dos habitantes; e por fim o total do consumo de cada categoria de consumidor.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int hab, cod;
    float kwh, consMes, maior, menor, consumResid = 0, consumComer = 0, consumIndust = 0;

    //Lendo o número de habitantes e o valor do kwh.
    printf("Informe a qtd de habitantes: ");
    scanf("%d", &hab);
    printf("Informe o valor do Kwh R$ ");
    scanf("%f", &kwh);

    //Lendo dados de cada habitante.
    for(int i = 1; i <= hab; i++){
        printf("\n------------- Cosumidor %d -------------\n", i);
        printf("Informe o consumo do mês: ");
        scanf("%f", &consMes);
        printf("Código do Consumidor:\n1-Residencial\n2-Comercial\n3-Industrial\n");
        printf("Digite o código: ");
        scanf("%d", &cod);
        printf("----------------------------------------\n");
        if(i > 1){
            switch (cod){
                case 1:
                    consumResid += consMes;
                    break;
                case 2:
                    consumComer += consMes;
                    break;
                case 3:
                    consumIndust += consMes;
                    break;
                
                default:
                    printf("\n## Você informou o código do cliente incorreto! ##\n\n");
                    break;
            }
            if(consMes > maior){
                maior = consMes;
            }else if(consMes < menor){
                menor = consMes;
            }
        }else{
            maior = consMes;
            menor = consMes;
        }

    }
    //Mostrando resultados.
    printf("\n------------------------------------\n");
    printf("           RESUMO CONSUMO               ");
    printf("\n------------------------------------\n");
    printf("MAIOR CONSUMO: %.2f kwh\n", maior);
    printf("MENOR CONSUMO: %.2f kwh\n", menor);
    printf("MÉDIA CONSUMO: %.2f kwh\n", ((consumResid + consumComer + consumIndust) / hab));
    printf("------------------------------------\n");
    printf("TOTAL CONSUMO RESIDENCIAL: R$ %.2f\n", (consumResid * kwh));
    printf("TOTAL CONSUMO COMERCIAL: R$ %.2f\n", (consumComer * kwh));
    printf("TOTAL CONSUMO INDUSTRIAL: R$ %.2f\n", (consumIndust * kwh));
    printf("------------------------------------\n\n");

}