#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/*QUESTÃO 03 - Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm
10 elementos cada. Imprimir todos os conjuntos.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float vet1[10], vet2[10];

    //Lendo os valores reais.
    printf("\nDIGITE VALORES REAIS:");
    for(int i = 0; i < 10; i++){
        printf("\n%dº valor: ", (i + 1));
        scanf("%f", &vet1[i]);
    }

    //Calculando quadrado e armazenando no segundo vetor.
    for(int i = 0; i < 10; i++){
        vet2[i] = pow(vet1[i], 2);
    }

    //Imprimindo os dois conjuntos.
    printf("\nVALORES DIGITADOS: { ");
    for(int i = 0; i < 10; i++){
        printf("%.2f ", vet1[i]);
    }
    printf("}\n");
    printf("VALORES AO QUADRADO: { ");
    for(int i = 0; i < 10; i++){
        printf("%.2f ", vet2[i]);
    }
    printf("}\n\n");
}