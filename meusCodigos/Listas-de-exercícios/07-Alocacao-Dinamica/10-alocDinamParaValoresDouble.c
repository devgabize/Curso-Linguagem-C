#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Para alimentar o rand de forma diferente.
    srand((unsigned)time(NULL));

    //Definindo variáveis.
    int num = ((rand() % 100) + 1), tam;
    double *vetor;

    //Lendo o valor de tam.
    printf("Quantos valores deseja armazenar no vetor double? ");
    scanf("%d", &tam);

    //Alocando vetor de acordo com o tamanho digitado pelo usuário, mas mantendo o mínimo de 10 elementos.
    if(tam >= 10){
        vetor = (double*)malloc(tam * sizeof(double));
    }else{
        vetor = (double*)malloc(10 * sizeof(double));
    }

    //Atribuindo valores aleatórios aos 10 primeiros elementos do vetor.
    for(int i = 0; i < 10; i++){
        vetor[i] = num;
        num = ((rand() % 100) + 1);
    }

    //Mostrando os 10 primeiros elementos do vetor.
    printf("\n10 PRIMEIRAS POSIÇÕES DO VETOR: { ");
    for(int i = 0; i < 10; i++){
        printf("%.0f ", vetor[i]);
    }
    printf("}\n\n");

    //Liberando memória desalocando vetor.
    free(vetor);
}