#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 30 - Faça programas para calcular as seguintes sequências:
                   primeira: 1 + 2 + 3 + 4 + 5 + ... + n
                    segunda: 1 − 2 + 3 − 4 + 5 + ... + (2n − 1)
                   terceira: 1 + 3 + 5 + 7 + ... + (2n − 1)*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int n, i, sequen1 = 0, sequen2 = 0, sequen3 = 0;

    //Lendo o valor n.
    printf("\nInforme um valor para sequência: ");
    scanf("%d", &n);
    
    //Calculando primeira sequência.
    for(i = 1; i <= n; i++){
        sequen1 += i;
    }
    
    //Calculando segunda sequência.
    for(i = 1; i <= (2*n - 1); i++){
        printf("i ==> %d\n", i);
        if(i == 2 || i == 4){
            printf("Entrou --> %d\n", i);
            sequen2 -= i; 
            printf("Sequencia --> %d\n", sequen2);             
        }else{
            printf("Sequencia (soma) --> %d\n", sequen2);
            sequen2 += i;
        }        
    }
    
    //Calculando terceira sequência.
    for(i = 1; i <= (2*n - 1); i= i + 2){
        sequen3 += i;       
    }

    //Mostrando resultado das sequencias.
    printf("\n-------------------\nRESULTADOS DAS SEQUÊNCIAS\n-------------------\n");
    printf("PRIMEIRA = %d\n", sequen1);
    printf("SEGUNDA = %d\n", sequen2);
    printf("TERCEIRA = %d\n", sequen3);
    printf("-------------------\n\n");
}