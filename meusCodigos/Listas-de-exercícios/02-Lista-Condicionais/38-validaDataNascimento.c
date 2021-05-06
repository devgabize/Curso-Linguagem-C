#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 38 - Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros:
Dia, Mês e Ano. Teste a validade desta data para saber se esta é uma data válida. Teste se o dia fornecido é um dia válido: dia > 0, dia ≤ 28 para o mês de fevereiro (29 se o ano for bissexto), dia ≤ 30 em abril, junho, setembro e novembro, dia ≤ 31 nos outros meses. Teste a validade do mês: mês > 0 e mês < 13. Teste a validade do ano: ano ≤ ano atual (use uma constante definida com o valor igual a 2008). Imprimir: “data válida” ou “data inválida” no final da execução do programa.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int dia, mes, ano;

    //Lendo data de aniversário.
    printf("====== DATA DE NASCIMENTO ======\n");
    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o mes: ");
    scanf("%d", &mes);
    printf("Informe o ano: ");
    scanf("%d", &ano);
    printf("--------------------------------\n");

    //Verificando data de nascimento.
    if(ano <= 2021){
        if(mes >=1 && mes <= 12){
            if((ano % 400) == 0 || (ano % 4) == 0 && (ano % 100) != 0){
                if(mes == 2 && dia >= 1 && dia <= 29){
                    printf("\n É ISSO AI! DATA VÁLIDA!\n\n");
                }else if(mes == 2 && dia >= 1 && dia > 29){
                    printf("\nDATA INVÁLIDA! CARA, FEVEREIRO NUNCA TEVE 30 DIAS, COMO ESSE ANO É BISSEXTO O MÁXIMO É 29 DIAS :D\n\n");
                }
            }else{
                if(mes == 2 && dia >= 1 && dia <= 28){
                    printf("\n É ISSO AI! DATA VÁLIDA!\n\n");
                }else if(mes == 2 && dia >= 1 && dia > 28){
                    printf("\nDATA INVÁLIDA! CARA, FEVEREIRO NUNCA TEVE 30 DIAS, COMO ESSE ANO NÃO É BISSEXTO O MÁXIMO É 28 DIAS :D\n\n");
                }
            }
            if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
                if(dia >=1 && dia <= 30){
                    printf("\nDATA VÁLIDA! É ISSO AI!\n\n");
                }else{
                    printf("\nDATA INVÁLIDA! CARA, ESSE MÊS SÓ TEM 30 DIAS!\n\n");
                }
            }else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
                if(dia >=1 && dia <= 31){
                    printf("\nDATA VÁLIDA! É ISSO AI!\n\n");
                }else{
                    printf("\nDATA INVÁLIDA! CARA, ESSE MÊS SÓ TEM 31 DIAS!\n\n");
                }
            }
        }else{
            printf("\nDATA INVÁLIDA! NÃO SEI QUE ANO É O SEU, MAS O MEU TEM APENAS 12 MESES! :)\n\n");
        }
    }else{
        printf("\nDATA INVÁLIDA! AINDA ESTAMOS EM 2021, VOCÊ AINDA VAI NASCER!\n\n");
    }
}