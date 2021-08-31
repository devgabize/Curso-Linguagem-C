#include<stdio.h>
#include<stdlib.h>

//Função principal do programa.
void main(){

    //Definindo variáveis.
    int a = 1;

    //Contando até 10.
    //Primeiro confere a condição, depois repete o bloco.
    while(a <= 10){
        //Imprimindo 'a' na tela.
        printf("\n%d", a);

        //Incremento.
        a++; //a = a + 1;    
    }

    //Alterando o valor de 'a'.
    a = 20;

    //Primeiro executa umavez, depois confere a condição.
    do{
        //Imprimindo 'a' na tela.
        printf("\n%d", a);

        //Incremento
        a++;
    }while(a <= 10);
}
