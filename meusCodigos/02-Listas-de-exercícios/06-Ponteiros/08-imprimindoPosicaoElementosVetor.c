#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float vet[10] = {1.5, 3.2, 4.9, 6.1, 9.7, 14.3, 20.6, 8.4, 24.9, 41.2}, *pont;
    
    for(int i = 0; i < 10; i++){
        pont = &vet[i];
        printf("\nElemento[%d] posição = %d\n", i, pont);
    }
    //Retorno da função.
    return 0;
}