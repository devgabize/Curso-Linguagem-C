#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int calculaSomatorio(int n){
    int somatorio = 0;
    for(int i = 1; i <= n; i++){
        somatorio += i;
    }

    return somatorio;
}

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int n;

    //Lendo o valor de n.
    printf("Para o somatório digite o valor de n: ");
    scanf("%d", &n);

    //Chamando a função, passando o valor e mostrando o resultado.
    printf("\nSOMATÓRIO: %d\n\n", calculaSomatorio(n));
}