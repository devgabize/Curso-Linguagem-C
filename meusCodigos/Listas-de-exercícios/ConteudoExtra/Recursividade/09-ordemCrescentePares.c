#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int imprimeOrdemCrescenteNumerosPares(int N, int i){
    if(i == N){
        printf(" %d", i);
        return 0;
    }else{
        printf(" %d", i);
        return imprimeOrdemCrescenteNumerosPares(N, i + 2);
    }
}

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int N, i = 0, verif = 1;

    //Lendo o valor de N e verificando se é par.
    do{
        printf("Digite um valor PAR para a contagem: ");
        scanf("%d", &N);
        if((N % 2) == 0){
            verif = 0;
        }else{
            printf("\n## VALOR DDEVE SER PAR! ##\n      Digite novaamente!\n\n");
        }
    }while(verif == 1);

    //Chamando a função.
    imprimeOrdemCrescenteNumerosPares(N,i);

    printf("\n\n");
}