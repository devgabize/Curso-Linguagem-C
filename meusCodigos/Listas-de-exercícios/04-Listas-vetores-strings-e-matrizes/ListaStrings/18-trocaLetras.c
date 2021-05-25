#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

/*QUESTÃO 18 - Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em
uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    char L1, L2, string[600];
    int i = 0;

    //Lendo a string e as letras para troca.
    printf("Digite uma frase ou palavra: ");
    fgets(string, 600, stdin);
    printf("Informe uma letra para ser subistituída: ");
    scanf("%c", &L1);
    getchar();
    printf("Por qual letra deseja subistituir: ");
    scanf("%c", &L2);

    //Analisando a string e a ocorrência de L1 para ser substituída por L2.
    while(string[i] != '\0'){
        if(string[i] == L1){
            string[i] = L2;
        }
        i++;
    }

    //Mostrando nova string.
    printf("\nString modificada ao trocar %c por %c:\n%s\n\n", L1, L2, string);

}