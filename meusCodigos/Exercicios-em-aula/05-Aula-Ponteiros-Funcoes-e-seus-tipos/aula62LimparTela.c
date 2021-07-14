#include<stdio.h>
#include<stdlib.h>

//Limpa a tela.
void limpaTela(){
    system("clear");
}

int main(){

    //Definindo variáveis.
    int a;

    //Imprimindo alguma coisa.
    printf("Digite um valor para 'a': ");

    // Lendo o valor.
    scanf("%d", &a);

    //Chama a função que limpa a tela.
    limpaTela();   

    printf("O valor digitado foi %d \n Fim do Programa!\n", a); 

    //Retorno da função.
    return 0;
}