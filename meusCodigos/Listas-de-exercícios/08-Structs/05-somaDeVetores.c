#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct Vetor{
    float x, y, z;
};

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    struct Vetor vet1, vet2, soma;

    //Lendo as coordenadas dos dois vetores.
    printf("Digite as coordenadas dos vetores!\nPRIMEIRO VETOR:\nx: ");
    scanf("%f", &vet1.x);
    printf("y: ");
    scanf("%f", &vet1.y);
    printf("z: ");
    scanf("%f", &vet1.z);
    printf("\nSEGUNDO VETOR:\nx: ");
    scanf("%f", &vet2.x);
    printf("y: ");
    scanf("%f", &vet2.y);
    printf("z: ");
    scanf("%f", &vet2.z);

    //Realizando a soma dos vetores.
    soma.x = vet1.x + vet2.x;
    soma.y = vet1.y + vet2.y;
    soma.z = vet1.z + vet2.z;

    //Mostrando resultado.
    printf("\nVETOR RESULTANTE DA SOMA: (%.1f; %.1f; %.1f)\n\n", soma.x, soma.y, soma.z);
}