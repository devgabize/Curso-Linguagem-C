#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int imprimeOrdemDecrescenteNumerosPares(int N){
    if(N == 0){
        printf(" %d", N);
        return 0;
    }else{
        printf(" %d", N);
        return imprimeOrdemDecrescenteNumerosPares(N - 2);
    }
}

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int N, verif = 1;

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
    imprimeOrdemDecrescenteNumerosPares(N);

    printf("\n\n");
}