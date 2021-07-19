#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num1, *pont1, num2, *pont2;
    pont1 = &num1;
    pont2 = &num2;

    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite um valor: ");
    scanf("%d", &num2);

    if(pont1 > pont2){
        printf("\nValor armazenado no maior endereço: %d\n\n", num1);
    }else{
        printf("\nValor armazenado no maior endereço: %d\n\n", num2);
    }

    //Retorno da função.
    return 0;
}