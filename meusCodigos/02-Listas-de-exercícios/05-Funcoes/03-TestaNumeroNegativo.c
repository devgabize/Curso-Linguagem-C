#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int testaNumero(int a){
    if(a > 0){
        return 1;
    }else if(a < 0){
        return -1;
    }else{
        return 0;
    }
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num;

    printf("Digite um valor: ");
    scanf("%d", &num);

    switch (testaNumero(num))
    {
    case 1:
        printf("\nO número digitado é POSITIVO!\n\n");
        break;
    case -1:
        printf("\nO número digitado é NEGATIVO!\n\n");
        break;
    case 0:
        printf("\nO número digitado é IGUAL A ZERO!\n\n");
        break;
    }
    //Retorno da função.
    return 0;
}