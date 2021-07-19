#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int vet[5], *pont;
    
   printf("\nVALORES DO VETOR!\n");
    for(int i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < 5; i++){
        if(vet[i] % 2 == 0){
            pont = &vet[i];
            printf("\nElemento[%d] posição = %d\n", i, pont);
        }
    }
    //Retorno da função.
    return 0;
}