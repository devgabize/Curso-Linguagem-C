#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int *vetor, num, i = 0, tam = 0;

    //Alocando Dinamicamente o vetor.
    vetor = (int*)malloc(2 * sizeof(int));
   
    //Lendo os valores do vetor.
    printf("Digite valores para o vetor e ao final digite um número negativo!\n");
    printf("Digite um valor: ");
    scanf("%d", &num);
    if(num >= 0){
        vetor[i] = num;
        i++;
        tam += 2;
        do{            
            printf("Digite um valor: ");
            scanf("%d", &num);
            if(num >= 0){
                vetor = (int*)realloc(vetor, tam * sizeof(int));
                vetor[i] = num;
                i++;
                 tam += 2;
            }else{
                printf("\n### FIM DA LEITURA! ###\n\n");
                printf("VETOR LIDO: { ");
                for(int j = 0; j < i; j++){
                    printf("%d ", vetor[j]);
                }       
                printf("}\n\n");
            }
        }while(num > 0);
    }else{
        printf("\n### PROGRAMA FINALIZADO! ###\n\n");
    }

    //Liberando memória desalocando o vetor.
    free(vetor);
    
}