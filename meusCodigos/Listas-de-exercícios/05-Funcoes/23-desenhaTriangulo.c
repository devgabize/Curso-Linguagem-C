#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void geraTriangulo(int n){
    int aux;
    printf("\n");
    for(int i = 1; i <= ((2*n) - 1); i++){
        if(i <= (((2*n) - 1) / 2)){
            for(int j = 0; j < i; j++){
                printf("*");
            }
            printf("\n\n");
            aux = i + 1;
        }else{
            for(int j = aux; j > 0; j--){
                printf("*");
            }
            printf("\n\n");   
            aux--;
        }
    }
    printf("\n\n");
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int n;

    printf("Digite a largura do triângulo: ");
    scanf("%d", &n);

    printf("\n%d / 2 = %d\n\n", n, (((2*n) - 1) / 2));

    //Chamando a função.
    geraTriangulo(n);

    //Retorno da função.
    return 0;
}