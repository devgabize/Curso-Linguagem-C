#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int *memoria, tam, opc, pos;

    //Lendo o valor de tam.
    printf("Digite o tamanho da memória que deseja: ");
    scanf("%d", &tam);

    //Alocando dinamicamente memoria.
    memoria = (int*)malloc(tam * sizeof(int));

    //Zerando todos os dados do vetor memoria.
    for(int i = 0; i < tam; i++){
        memoria[i] = 0;
    }

    //Mostrando as opc para o usuário.
    do{
        printf("\n------------ MENU DE OPÇÕES ------------\n");
        printf("1- Inserir valor em uma determinada posição.\n2- Consultar valor em determinada posição.\n3- Sair\n");
        printf("----------------------------------------\nDigite a opção desejada: ");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                printf("Em qual posição deseja adicionar um valor? ");
                scanf("%d", &pos);
                printf("Digite o valor que deseja adicionar na posição %d: ", pos);
                scanf("%d", &memoria[pos]);
                break;
            case 2:
                printf("Qual posição deseja consultar o valor? ");
                scanf("%d", &pos);
                printf("Valor contido na posição %d: %d\n\n", pos, memoria[pos]);
                break;
            case 3:
                printf("\n### Finalizando programa! ###\n\n");
                break;
            default:
                printf("\n### OPÇÃO INVÁLIDA! Olhe novamente as opções! ###\n\n");
                break;
        }
    }while(opc != 3);

    free(memoria);
}