#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void calculaMedias(float nota1, float nota2, float nota3, char opc){
    switch(opc){
        case 'A':
            printf("\nMédia aritmética: %.2f\n\n", ((nota1 + nota2 + nota3) / 3.0));
            break;
        case 'P':
            printf("\nMédia ponderada: %.2f\n\n", (((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10.0));
    }
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float nota1, nota2, nota3;
    char opc;

    printf("\nINFORME AS 3 NOTAS DO ALUNO!\n");
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);
    printf("Qual média deseja calcular? Digite:\n A - Média aritmética\n P - Média Ponderada\n");
    scanf(" %c", &opc);

    //Chamando a função.
    calculaMedias(nota1, nota2, nota3, opc);

    //Retorno da função.
    return 0;
}