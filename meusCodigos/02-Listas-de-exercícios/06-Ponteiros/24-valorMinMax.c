#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void encontraValorMaximoMinimo(int *V, int *min, int *max){
    for(int i = 0; i < 5; i++){
        if(V[i] < *min){
            *min = V[i];
        }else if(V[i] > *max){
            *max = V[i];
        }
    }
}

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int V[5] = {4, 8, 3, 7, 1}, min = 4, max = 4;

    //Chamando função.
    encontraValorMaximoMinimo(V, &min, &max);

    //Mostrando resultados.
    printf("\nVETOR = { ");
    for(int i = 0; i < 5; i++){
        printf("%d ", V[i]);
    }
    printf("}\n");
    printf("VALOR MÍNIMO: %d\nVALOR MÁXIMO: %d\n\n", min, max);
}