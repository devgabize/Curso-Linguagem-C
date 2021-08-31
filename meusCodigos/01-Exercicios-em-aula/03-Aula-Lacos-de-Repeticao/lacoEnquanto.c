#include<stdio.h>
#include<stdlib.h>

//Função principal do programa.
void main(){

    //Definindo variáveis.
    int a = 1, b = 10;

    //Contando at´e 10.
    while(a <= 10){
        //Imprimindo 'a' na tela.
        printf("\n%d", a);

        //Incremento.
        a++; //a = a + 1;    
    }

    printf("\n");

    //Contagem regressiva.
    while(b >= 1){
        //Imprimindo 'a' na tela.
        printf("\n%d", b);

        //Incremento.
        b--; //b = b - 1;    
    }

    printf("\n");

    //Pausa o programa após executar.
    system("pause");
}