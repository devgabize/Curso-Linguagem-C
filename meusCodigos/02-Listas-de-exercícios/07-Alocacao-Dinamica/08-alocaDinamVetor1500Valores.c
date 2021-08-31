#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int *vetor, cont = 0;

    //Chamando função.
    vetor = calloc(1500, sizeof(int));

    //Contando os 0(zeros) atribuídos no vetor.
    for(int i = 0; i < 1500; i++){
        if(vetor[i] == 0){
            cont++;
        }
    }
    printf("\nNÚMEROS 0(ZEROS) ENCONTRADOS: %d\n", cont);

    //Atribuibndo para cada elemento do vetor o valor do seu índice.
    for(int i = 0; i < 1500; i++){
        vetor[i] = i;
    }

    //Imprimindo os 10 primeiros e os 10 últimos elementos do vetor.
    printf("\nOs 10 primeiros e os 10 últimos elementos do vetor:\n{ ");
    for(int i = 0; i < 1500; i++){
        if(i < 10){
            printf("%d ", vetor[i]);
        }else if(i > 1489){
            printf("%d ", vetor[i]);  
        }
    }
    printf("}\n\n");

    //Liberando memória desalocando o vetor.
    free(vetor);
}