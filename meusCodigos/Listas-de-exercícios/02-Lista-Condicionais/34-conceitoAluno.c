#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 34 - Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a
tabela abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.
                |     NOTA    |CONCEITO (ATÉ 20 FALTAS)| CONCEITO (MAIS DE 20 FALTAS)|
                |9.0 até 10.0 |            A           |               B             |
                |7.5 até 8.9  |            B           |               C             |
                |5.0 até 7.4  |            C           |               D             |
                |4.0 até 4.9  |            D           |               E             |
                |0.0 até 3.9  |            E           |               E             |
                ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float nota;
    int falta;

    //Lendo nota e número de faltas.
    printf("Digite a nota: ");
    scanf("%f", &nota);
    printf("Digite a(s) falta(s): ");
    scanf("%d", &falta);

    //Analisando a nota, a falta e mostrando conceito.
    if(nota >= 9.0 && nota <= 10.0){
        if(falta <= 20){
            printf("\nCONCEITO: A\n\n");
        }else{
            printf("\nCONCEITO: B\n\n");    
        }
    }else if(nota >= 7.5 && nota <= 8.9){
        if(falta <= 20){
            printf("\nCONCEITO: B\n\n");
        }else{
            printf("\nCONCEITO: C\n\n");    
        }
    }else if(nota >= 5.0 && nota <= 7.4){
        if(falta <= 20){
            printf("\nCONCEITO: C\n\n");
        }else{
            printf("\nCONCEITO: D\n\n");    
        }
    }else if(nota >= 4.0 && nota <= 4.9){
        if(falta <= 20){
            printf("\nCONCEITO: D\n\n");
        }else{
            printf("\nCONCEITO: E\n\n");    
        }
    }else if(nota >= 0.0 && nota <= 3.9){
        if(falta <= 20){
            printf("\nCONCEITO: E\n\n");
        }else{
            printf("\nCONCEITO: E\n\n");    
        }
    }else{
        printf("\n\n#### NOTA DIGITADA INVÁLIDA! ####\n\n");
    }
}