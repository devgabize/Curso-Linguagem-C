#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

void cal_esfera(float R, float *area, float *volume){
    *area = 4 * 3.1416 * pow(R, 2);
    *volume = (4/3) * 3.1416 * pow(R, 3);
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float R, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &R);

    //Chamando a função.
    cal_esfera(R, &area, &volume);

    //Mostrando resultado.
    printf("\nESFERA:\n");
    printf("Area = %.2f\n", area);
    printf("Volume = %.2f\n\n", volume);

    //Retorno da variável.
    return 0;
}