#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool retornaBooleano(){
    return true;
}

int main(){

    //Definindo variáveis.
    bool variavelBooleana;

    //Variável ecebendo booleano.
    variavelBooleana = retornaBooleano();

    //Se for verdadeiro executa o primeiro bloco.
    if(variavelBooleana){
        printf("Eh verdadeiro!\n");
    }//Senão executa o segundo bloco.
    else{
        printf("Eh falso!\n");
    }

    printf("%d\n", variavelBooleana);

    //Retorno da função.
    return 0;
}