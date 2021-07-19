#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

void mostraDataPorExtenso(int dia, int mes, int ano){
    switch (mes)
    {
    case 1:
        printf("\n %d de janeiro de %d\n\n", dia, ano);
        break;
    case 2:
        printf("\n %d de fevereiro de %d\n\n", dia, ano);
        break;
    case 3:
        printf("\n %d de março de %d\n\n", dia, ano);
        break;
    case 4:
        printf("\n %d de abril de %d\n\n", dia, ano);
        break;
    case 5:
        printf("\n %d de maio de %d\n\n", dia, ano);
        break;
    case 6:
        printf("\n %d de junho de %d\n\n", dia, ano);
        break;
    case 7:
        printf("\n %d de julho de %d\n\n", dia, ano);
        break;
    case 8:
        printf("\n %d de agosto de %d\n\n", dia, ano);
        break;
    case 9:
        printf("\n %d de setembro de %d\n\n", dia, ano);
        break;
    case 10:
        printf("\n %d de outubro de %d\n\n", dia, ano);
        break;
    case 11:
        printf("\n %d de novembro de %d\n\n", dia, ano);
        break;
    case 12:
        printf("\n %d de dezembro de %d\n\n", dia, ano);
        break;

    default:
        printf("\n\n## MÊS INFORMADO É INVÁLIDO! ## \n\n");
        break;
    }
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int dia, mes, ano;

    printf("Informe uma data!\n");
    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o mês: ");
    scanf("%d", &mes);
    printf("Informe o ano: ");
    scanf("%d", &ano);

    //Chamando a função para mostra data por extenso.
    mostraDataPorExtenso(dia, mes, ano);

    //Retorno da função.
    return 0;
}