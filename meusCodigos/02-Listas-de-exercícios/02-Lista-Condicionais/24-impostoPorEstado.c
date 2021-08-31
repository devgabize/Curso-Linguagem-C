#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/*Questão 24 - Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um programa em que o usuário entre com o valor e o estado destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrar uma mensagem de erro.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float valor;
    char estado[2];

    //Lendo o valor do produto e o estado destino.
    printf("Digite o valor do produto R$");
    scanf("%f", &valor);
    printf("Digite o estado destino do produto (MG, SP, RJ ou MS): ");
    scanf("%s", &estado);

    //Verificando se o estado digitado está correto.
    if(strcmp(estado,"MG") == 0 || strcmp(estado,"SP") == 0 || strcmp(estado,"RJ") == 0 || strcmp(estado,"MS") == 0){
        if(strcmp(estado,"MG") == 0){
            printf("\nValor do produto com 7%% de imposto do estado: R$%.2f\n\n", (valor * 1.07));
        }else if(strcmp(estado,"SP") == 0){
            printf("\nValor do produto com 12%% de imposto do estado: R$%.2f\n\n", (valor * 1.12));
        }else if(strcmp(estado,"RJ") == 0){
            printf("\nValor do produto com 15%% de imposto do estado: R$%.2f\n\n", (valor * 1.15));
        }else if(strcmp(estado,"MS") == 0){
            printf("\nValor do produto com 8%% de imposto do estado: R$%.2f\n\n", (valor * 1.08));
        }
    }else{
        printf("\nERROR: ESTADO DIGITADO NÃO É VÁLIDO! DIGITE UMA DAS OPÇÕES: MS, SP, RJ OU MS. ===\n\n");
    }
}