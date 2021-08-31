#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

float calculaVolumeCilindro(float altura, float raio){
    return 3.141592 * pow(raio, 2) * altura;
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float altura, raio, volume;

    printf("Informe a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Informe o raio do cilindro: ");
    scanf("%f", &raio);

    //Chamando a função.
    volume = calculaVolumeCilindro(altura, raio);

    //Mostrando resultado.
    printf("\nVolume = %.2f\n\n", volume);
    
    //Retorno da função.
    return 0;
}