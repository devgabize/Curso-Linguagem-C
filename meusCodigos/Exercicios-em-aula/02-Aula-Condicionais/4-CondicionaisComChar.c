#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    char letra ='x';

    //Condicional simples.
    if(letra == 'x'){
        printf("\nA letra é x.\n");
    }

    printf("Código da letra = %d\n", letra);

    if(letra == 120){
        printf("A letra é x.\n");
    }
    
    //Pausa o programa após executar.
    system("pause");
}