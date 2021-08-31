#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

float calculaExponenciacao(float base, float exp){
    float result = 1;
    for(int i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float X, Z;

    printf("CÁLCULO EXPONENCIAÇÃO!\n");
    printf("Digite a base: ");
    scanf("%f", &X);
    printf("Digite o expoente: ");
    scanf("%f", &Z);

    //Chamando a função e mostrando o resultado.
    printf("\n%.1f elevado à %.1f é igual a: %.1f\n\n", X, Z, calculaExponenciacao(X, Z));

    //Retorno da função.
    return 0;
}