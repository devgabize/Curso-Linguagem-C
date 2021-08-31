#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 41 - Faça um programa que calcula a associação em paralelo de dois resistores R1 e R2
fornecidos pelo usuário via teclado. O programa fica pedindo estes valores e calculando
até que o usuário entre com um valor para resistência igual a zero.
                        R =  (R1 ∗ R2) / (R1 + R2)*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float R, R1, R2;

    //Calculando resistência.
    do{
        printf("Digite o valor do primeiro resistor: ");
        scanf("%f", &R1);
        printf("Digite o valor do segundo resistor: ");
        scanf("%f", &R2);

        R = (R1 * R2) / (R1 + R2);
        
        if(R > 0){
            printf("RESISTÊNCIA = %.2f\n", R);
        }
        
    }while(R > 0);

    printf("\nPROGRAMA FINALIZADO!\n\n");
}