#include<stdio.h>
#include<stdlib.h>

/*Explicação encontrada no site: http://linguagemc.com.br/arquivos-em-c-categoria-usando-arquivos*/

int main(){

    //Definindo variáveis.
    char palavra[20];

    //Criando ponteiro que será responsável por apontar a localização do registro e com ele será possível manipular o arquivo.
    FILE *pont_arq;

    //Abrindo o arquivo.
    pont_arq = fopen("aula01SóComC.txt", "a");

    //Tratando caso ocorra algum erro em abrir/criar o arquivo.
    if(pont_arq == NULL){
        printf("ERRO na abertura do arquivo!");
        return 1;
    }

    //Lendo uma mensagem do usuário para adicionar no arquivo.
    printf("Digite uma palavra para testar gravacao do arquivo: ");
    scanf("%s", palavra);

    //Armazenando a string no arquivo.
    fprintf(pont_arq, "%s", palavra);


    //Fechando o arquivo.
    fclose(pont_arq);

    printf("Dados gravados com sucesso!\n\n");
    
    getchar();    
    return 0;
}