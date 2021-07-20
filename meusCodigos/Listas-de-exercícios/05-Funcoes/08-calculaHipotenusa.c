#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

float calculaHipotenusa(float a, float b){
    return sqrt(pow(a,2) + pow(b,2));
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float a, b, hipotenusa;

    printf("Informe os catetos do triângulo!\n");
    printf("Cateto a: ");
    scanf("%f", &a);
    printf("Cateto b: ");
    scanf("%f", &b);

    //Chamando a função.
    hipotenusa = calculaHipotenusa(a, b);

    //Mostrando resultado.
    printf("\nHipotenusa = %.2f\n\n", hipotenusa);
    
    //Retorno da função
    return 0;
}