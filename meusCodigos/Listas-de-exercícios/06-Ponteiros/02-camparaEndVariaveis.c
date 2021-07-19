#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num1, num2, *pont1, *pont2;
    pont1 = &num1;
    pont2 = &num2;

    if(pont1 > pont2){
        printf("ENDEREÇO NA MEMÓRIA (pont1): %d \n\n", pont1);
    }else{
        printf("ENDEREÇO NA MEMÓRIA (pont2): %d \n\n", pont2);
    }

    //Retorno da função.
    return 0;
}