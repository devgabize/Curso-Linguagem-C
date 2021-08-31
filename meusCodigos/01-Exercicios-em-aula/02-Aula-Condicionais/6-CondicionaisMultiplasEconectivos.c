#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int a = 18;

    //Conectivo Lógico E (AND), se UMA COMPARAÇÃO for FALSA, NÃO entra no bloco.
    if(a > 5 && a > 15){
        printf("\nA variável 'a' está entre 5 e 15.\n");
    }

    //Conectivo Lógico OU (OR), se UMA COMPARAÇÃO for  VERDADEIRA, já entra no bloco.
    if(a > 5 || a > 15){
        printf("A variavel 'a' é maior que 5 e 15.\n");
    }

    //Misturando conectivos.
    if((a > 5 && a < 15) || a == 20 ){
        printf("A variável 'a' está entre 5 e 15 ou ela vale 20.\n");
    }

    //Pausa o programa após executar.
    system("pause");
}