#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int ordenaValores(int *num1, int *num2, int *num3){
    int aux;
    if(*num1 == *num2 && *num1 == *num3){
        return 1;
    }else{
        if(*num2 < *num1 && *num2 < *num3){
            aux = *num1;
            *num1 = *num2;
            *num2 = aux;
        }
        if(*num3 < *num1 && *num3 < *num2){
            aux = *num1;
            *num1 = *num3;
            *num3 = aux;
        }
        if(*num3 < *num2){
            aux = *num2;
            *num2 = *num3;
            *num3 = aux; 
        }

        return 0;

    }
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int a, b, c;

    printf("\nDigite três valores!\n");
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    //Chamando a função.
    if(ordenaValores(&a, &b, &c) == 1){
        printf("\nVALORES DIGITADOS SÃO IGUAIS!\n");
        printf("Valores digitados: {%d, %d e %d}\n\n", a, b, c);
    }else{
        printf("\nVALORES DIGITADOS SÃO DIFERENTES!\n");
        printf("Valores digitados: {%d, %d e %d}\n\n", a, b, c);
    }

    //Retorno da função.
    return 0;
}