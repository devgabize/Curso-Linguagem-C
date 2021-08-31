#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void calculaConsumoVeiculoMostraMensagem (float dist, float consumo){
    if((dist / consumo) < 8.0){
        printf("\nCONSUMO: %.2f\nVenda o carro!\n\n", (dist / consumo));
    }else if((dist / consumo) >= 8.0 && (dist / consumo) <= 14.0){
        printf("\nCONSUMO: %.2f\nEconômico!\n\n", (dist / consumo));
    }else{
        printf("\nCONSUMO: %.2f\nSuper econômico!\n\n", (dist / consumo));
    } 
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float km, litros;

    printf("Informe a distância percorrida em km: ");
    scanf("%f", &km);
    printf("Informe a qtd de litros de gasolina consumidos: ");
    scanf("%f", &litros);

    //Chamando a função.
    calculaConsumoVeiculoMostraMensagem(km, litros);

    //Retorno da função.
    return 0;
}