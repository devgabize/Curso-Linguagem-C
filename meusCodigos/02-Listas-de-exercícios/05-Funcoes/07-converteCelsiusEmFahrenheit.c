#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float converteEmFahrenheit(float C){
    float F;
    F = C * (9.0/5.0) + 32.0;
    return F;
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float C, F;

    printf("\nInforme a temperatura em graus Celsius (°C): ");
    scanf("%f", &C);

    //Chamando a função.
    F = converteEmFahrenheit(C);

    //Mostranod resultado.
    printf("\n%.2f°C em Fahrenheit corresponde a: %.2fF\n\n", C, F);

    //Retorno da função.
    return 0;
}