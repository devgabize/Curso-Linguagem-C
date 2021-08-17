#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int numLoteria[6], numBilhete[6], acertos = 0, *vetAcertos;

    //Lendo os números gerados da loteria e os números do bilhete.
    printf("Digite os 6 números gerados pela loteria: ");
    for(int i = 0; i < 6; i++){
        scanf("%d", &numLoteria[i]);
    }

    printf("Digite os 6 números do seu bilhete: ");
    for(int i = 0; i < 6; i++){
        scanf("%d", &numBilhete[i]);
    }

    //Comparando os números.
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(numLoteria[i] == numBilhete[j]){
                acertos++;
            }
        }
    }

    //Alocando vetor a partir da quantidade de acertos.
    vetAcertos = (int *)malloc(acertos * sizeof(int));

    //Guardando os números acertados no vetor.
    int k = 0;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(numLoteria[i] == numBilhete[j]){
                vetAcertos[k] = numLoteria[i];
                k++;
            }
        }
    }

    //Mostrando números sorteados e acertos.
    printf("\nNúmero sorteados: { ");
    for(int i = 0; i < 6; i++){
        printf("%d ", numLoteria[i]);
    }
    printf("}\nNúmeros acertados: { ");
    for(int i = 0; i < acertos; i++){
        printf("%d ", vetAcertos[i]);
    }
    printf("}\n\n");

    //Liberando memória, desalocando o vetor.
    free(vetAcertos);
}