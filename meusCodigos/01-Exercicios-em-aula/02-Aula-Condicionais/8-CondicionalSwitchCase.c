#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int a = 2;
    char b = 'y';

    //Código de exemplo com if.
    if(a == 1){
        printf("Opção escolhida: 1\n");
    }else if(a == 2){
        printf("Opção escolhida: 2\n");
    }else if(a == 3){
        printf("Opção escolhida: 3\n");
    }else {
        printf("Opção inválida!\n");
    }

    //O mesmo código de cima, adaptado ao Switch.
    switch(a){
        case 1:
            printf("Opção escolhida: 1\n");
            break;
        case 2:
            printf("Opção escolhida: 2\n");
            break;
        case 3:
            printf("Opção escolhida: 3\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    //Switch com char.
    switch (b)
    {
    case 'x':
        printf("\nA letra é x.\n");
        break;
    
    default:
        printf("\nOpção inválida!\n");
        break;
    }
}