#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float calculaValorSerieS(int n, int i){
    if(i == n){
        return ((1.0 + (i*i)) / i);
    }else{
        return ((1.0 + (i*i)) / i) + calculaValorSerieS(n, (i + 1));
    }
}

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int n;

    //Lendo valor de n.
    printf("Digite o valor de n para o cálculo da série: ");
    scanf("%d", &n);

    //Chamando a função e mostrando resultado.
    printf("\nResultado da Série S: %.2f\n\n", calculaValorSerieS(n, 1));
}