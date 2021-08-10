#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int Multip_Rec(int n1, int n2){
    if(n2 == 0){
        return 0;
    }else{
        return n1 + Multip_Rec(n1, (n2-1));
    }
}

void main(){
    //Utilizar acentos
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int n1, n2;

    //Lendo valores.
    printf("\n--- MULTIPLICAÇÃO RECURSIVA ---\n");
    printf("Digite um valor para a multiplicação: ");
    scanf("%d", &n1);
    printf("Digite outrro valor para multiplicação: ");
    scanf("%d", &n2);

    //Chamando a função e mostrando resultado.
    printf("\nA multiplicação de %d e %d é: %d\n\n", n1, n2, Multip_Rec(n1,n2));
}