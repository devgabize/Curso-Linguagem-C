#include<stdio.h>
#include<stdlib.h>

void mostraSucessor(int numero){
    printf("\nO sucessor de %d eh %d\n", numero, numero+1);
}

int retornaAntecessor(int numero){
    return numero - 1;
}

int main(){
    //Definindo variáveis.
    int a;

    //Imprimindo.
    printf("Digite um valor: ");

    //Passa um valor para 'a'.
    scanf("%d", &a);

    //Chama a função.
    mostraSucessor(a); 

    //Exibe o antecessor.
    printf("\nO antecessor de %d eh %d\n", a, retornaAntecessor(a));   

    //Retorno da função.
    return 0;
}