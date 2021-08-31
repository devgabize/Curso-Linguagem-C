#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int raizes(float A, float B, float C, float *X1, float *X2){
    float delta;
    delta = pow(B, 2) - 4 * A * C;
    if(delta < 0){
        return 0;
    }else if(delta == 0){
        *X1 = (-B + sqrt(delta)) / 2.0 * A;
        *X2 = (-B - sqrt(delta)) / 2.0 * A;
        return 1;
    }else if(delta > 0){
       *X1 = (-B + sqrt(delta)) / 2.0 * A;
       *X2 = (-B - sqrt(delta)) / 2.0 * A;
       return 2; 
    }
}

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float A, B, C, X1, X2;
    int test = 0;

    //Lendo coeficientes da equação.
    printf("\n--------------------------\nCALCULA EQUAÇÃO DO 2º GRAU\n--------------------------\n");
    printf("Informe os coeficientes da equação\n------------------------\n");
    do{
        printf("Valor de A: ");
        scanf("%f", &A);
        printf("Valor de B: ");
        scanf("%f", &B);
        printf("Valor de C: ");
        scanf("%f", &C);
        if(A != 0.0){
            test = 1;
        }else{
            printf("\n## VALOR INVÁLIDO! O coeficiente A NÃO PODE ser IGUAL A 0(zero)! ##\n\n");
        }
    }while(test == 0);

    //Chamando a função.
    printf("\nA equação possui %d raiz(es).\n\n",raizes(A, B, C, &X1, &X2));

    //Mostrando raizes.
    if(raizes(A, B, C, &X1, &X2) > 0){
        printf("Raiz(es):\n---------------\nX1 = %.2f\nX2 = %.2f\n---------------\n\n", X1, X2);
    }
}