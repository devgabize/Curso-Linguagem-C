#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int calculaPotenciaRecursao(int k, int n){
    if(n == 0){
        return 1;
    }else{
        return k * calculaPotenciaRecursao(k, n -1);
    }
}

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int k, n;

    //Lendo os valores de k e n.
    printf("Digite o valor da base: ");
    scanf("%d", &k);
    printf("Digite o valor do expoente: ");
    scanf("%d", &n);

    //Chamando a função e mostrando resultado.
    printf("\nA potencia de %d elevado a %d é: %d\n\n", k, n, calculaPotenciaRecursao(k, n));
}