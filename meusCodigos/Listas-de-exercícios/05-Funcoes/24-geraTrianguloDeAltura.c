#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void geraTrianguloDeAltura(int n){
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < ((2*n)-1); j++){
            if(j < (n - i)){
                printf(" ");
            }else if(j == (n-i)){
                for(int k = 0; k < (2*i-1); k++){
                    printf("*");
                }
            }else{
                printf(" ");
            }
        }
        printf("\n\n");
    }
    printf("\n\n");
}

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int n;

    //Lendo valor.
    printf("Para gerar o triângulo digite o valor de n: ");
    scanf("%d", &n);

    //Chamando a função.
    geraTrianguloDeAltura(n);
}