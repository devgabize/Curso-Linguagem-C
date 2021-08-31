#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int encontraMaiorValor(int *vet, int tam){
    int maior = *vet;
    for(int i = 0; i < tam; i++){
        if(*vet > maior){
            maior = *vet;
        }
        vet++;
    }
    return maior;
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int N, k;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &N);

    printf("Informe quantos elementos deseja imprimir por linha: ");
    scanf("%d", &k);

    //Definindo vetor.
    int vet[N], maior;

    printf("Digite os elementos do vetor:\n");
    for(int i = 0; i < N; i++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    //Chamando a função.
    maior = encontraMaiorValor(vet , N);

    //Mostrando resultado.
    printf("\nIMPRIMINDO VETOR: { \n");
    for(int i = 0, j = 1; i < N; i++, j++){
        if(j <= k){
            printf(" %d", vet[i]);
        }else{
            printf("\n");
            j = 1;
            printf(" %d", vet[i]);
        }        
    }
    printf("\n}\nMaior valor do vetor: %d\n\n", maior);

    //Retorno da função.
    return 0;
}