#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 26 - Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro
em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com
a tabela abaixo:
      _________________________________________
      |  CONSUMO  |  (Km/l)  |  MENSAGEM      |
      | menor que |    8     |  Venda o carro!|
      | entre     |  8 e 14  |      Econômico!|
      | maior que |    14    |Super econômico!|
      ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨*/
void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float km, l, consumo;

    //Lendo a distância e a quantidade de litros.
    printf("Digite a distância percorrida: ");
    scanf("%f", &km);
    printf("Digite o consumo do veículo: ");
    scanf("%f", &l);

    //Calculando o consumo.
    consumo = (km / l);

    //Mostrando mensagem na tela de acordo com o consumo.
    if(consumo < 8){
        printf("\nConsumo de %.2f! VENDA O CARRO!\n\n", consumo);
    }else if(consumo >= 8 && consumo <= 14){
        printf("\nConsumo de %.2f! ECONÔMICO!\n\n", consumo);
    }else{
        printf("\nConsumo de %.2f! SUPER ECONÔMICO!\n\n", consumo);
    }
}