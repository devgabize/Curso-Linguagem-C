#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void realizaOperacoesMatematicas(int val1, int val2, char simb){
    switch (simb)
    {
    case '+':
        printf("\n Soma: %d + %d = %d\n\n", val1, val2, (val1 + val2));
        break;
    case '-':
        printf("\n Subtração: %d - %d = %d\n\n", val1, val2, (val1 - val2));
        break;
    case '*':
        printf("\n Multiplicação: %d x %d = %d\n\n", val1, val2, (val1 * val2));
        break;
    case '/':
        printf("\n Divisão: %d / %d = %d\n\n", val1, val2, (val1 / val2));
        break;
    
    default:
        printf("\nOperação inválida!\n\n");
        break;
    }
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int val1, val2;
    char simb;

    printf("Digite um valor: ");
    scanf("%d", &val1);
    printf("Digite um valor: ");
    scanf("%d", &val2);
    printf("Qual operação deseja fazer? digite\n + para soma\n - para subtração\n * para multiplicação\n / para divisão\n");
    scanf(" %c", &simb);

    //Chamando a função.
    realizaOperacoesMatematicas(val1, val2, simb);

    //Retorno da função.
    return 0;
}