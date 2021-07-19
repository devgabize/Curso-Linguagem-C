#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void calculaDobroVetor(int *vetor, int tamanho){
    printf("\nDobro do vetor digitado: { ");
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]*2);
        vetor[i] *= 2; 
    }
    printf("}\n\n");
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int vet[5];
    
    printf("\nVALORES DO VETOR!\n");
    for(int i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    //Chamando a função.
    calculaDobroVetor(vet, 5);

    //Retorno da função.
    return 0;
}