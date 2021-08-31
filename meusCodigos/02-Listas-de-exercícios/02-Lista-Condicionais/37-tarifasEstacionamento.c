#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 37 - As tarifas de certo parque de estacionamento são as seguintes:
    • 1a e 2a hora - R$ 1,00 cada
    • 3a e 4a hora - R$ 1,40 cada
    • 5a hora e seguintes - R$ 2,00 cada
O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem estacionar durante 61 minutos pagará por duas horas, que é o mesmo que pagaria se tivesse permanecido 120 minutos. Os momentos de chegada ao parque e partida deste são apresentados na forma de pares de inteiros, representando horas e minutos. Por exemplo, o par 12 50 representará “dez para a uma da tarde”. Pretende-se criar um programa que, lidos pelo teclado os momentos de chegada e de partida, escreva na tela o preço cobrado pelo estacionamento. Admite-se que a chegada e a partida se dão com
intervalo não superior a 24 horas. Portanto, se uma dada hora de chegada for superior à da partida, isso não é uma situação de erro, antes significará que a partida ocorreu no dia seguinte ao da chegada.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int horaEntrada, minEntrada, horaSaida, minSaida, duracaoMinutos, duracaoHoras;
    float tarifa;

    //Lendo hora de entrada e de saída.
    printf("Informe a chegada (horas e minutos): ");
    scanf("%d %d", &horaEntrada, &minEntrada);
    printf("Informe a saída (horas e minutos): ");
    scanf("%d %d", &horaSaida, &minSaida);

    //Transformando horas em minutos e calculando duração no estacionamento.
    duracaoMinutos = abs(((horaEntrada * 60) + minEntrada) - ((horaSaida * 60) + minSaida));

    //Transformando duração em horas e arredondando por excesso.
    if(duracaoMinutos % 60 != 0){
        duracaoHoras = (duracaoMinutos / 60) + 1;
    }else{
        duracaoHoras = duracaoMinutos / 60;
    }

    //Calculando preço a ser pago.
    if(duracaoHoras == 1 || duracaoHoras == 2){
        tarifa = duracaoHoras * 1.0;
    }else if(duracaoHoras == 3 || duracaoHoras == 4){
        tarifa = duracaoHoras * 1.40;
    }else{
        tarifa = duracaoHoras * 2.0;    
    }

    //Mostrando preço a ser pago.
    printf("\n======== VALOR ESTACIONAMENTO ========\n");
    printf("---------- >> R$ %.2f", tarifa);
    printf("\n======================================\n\n");    
}