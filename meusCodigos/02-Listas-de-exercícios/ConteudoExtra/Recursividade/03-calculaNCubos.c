#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int calculaSomaCubosRecursao(int n){
    if(n == 0){
        return 0;
    }else{
        return (n*n*n) + calculaSomaCubosRecursao(n -1);
    }
}

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int n;

    //Lendo valor de n.
    printf("Quantos cubos deseja somar: ");
    scanf("%d", &n);

    //Chamando a função e mostrando resultado.
    printf("\nSoma dos %d cubos é: %d\n\n", n, calculaSomaCubosRecursao(n));
}