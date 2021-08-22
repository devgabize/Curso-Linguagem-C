#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct Contato{
    char nome[30], telefone[20], end[200];
};

void main(){
    //Utilizando acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    struct Contato *contatos;

    //Alocando memória para contatos.
    contatos = (struct Contato*) malloc(5 * sizeof(struct Contato));
    int cont = 0, ordem[5];

    printf("\n----------ADICIONANDO CONTATOS NA AGENDA----------\n");
    for(int i = 0; i < 5; i++){
        printf("CONTATO %d:\n-------------\n", (i + 1));
        printf("NOME: ");
        scanf(" %[^\n]s", &contatos[i].nome);
        printf("TELEFONE: ");
        scanf(" %[^\n]s", &contatos[i].telefone);
        printf("ENDEREÇO: ");
        scanf(" %[^\n]s", &contatos[i].end);
        printf("\n");
    }

    //Organizando os contatos em ordem alfabética.
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(strcmp(contatos[i].nome, contatos[j].nome) < 0){
                cont++;
            }
        }
        if(cont == 4){
            ordem[0] = 0;
        }else if(cont == 3){
            ordem[1] = 1;
        }else if(cont == 2){
            ordem[2] = 2;
        }else if(cont == 1){
            ordem[3] = 3;
        }else{
            ordem[4] = 4;
        } 
        cont = 0;
    }

    //Mostrando contatos.
    printf("\n---------- CONTATOS DA AGENDA----------\n");
    for(int i = 0; i < 5; i++){
        printf("CONTATO %d:\n-------------\n", (i + 1));
        printf("NOME: %s\n", contatos[ordem[i]].nome);
        printf("TELEFONE: %s\n", contatos[ordem[i]].telefone);
        printf("ENDEREÇO: %s\n", contatos[ordem[i]].end);
    }
    printf("\n");
}