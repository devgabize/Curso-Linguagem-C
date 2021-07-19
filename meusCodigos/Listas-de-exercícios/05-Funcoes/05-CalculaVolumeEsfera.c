#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<math.h>

void calculoVolume(float R){
    float V;
    V = (4.0/3.0) * 3.1416 * pow(R, 3);
    printf("\nVOLUME DA ESFERA: %.2f\n\n", V);
}

int main(){
    //para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    //Chamando a função.
    calculoVolume(raio);

    //Retorno da função.
    return 0;
}