#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*Questão 13 - Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e
a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou superior a 60 pontos.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float not1, not2, not3, medPond;

    //Lendo as três notas da prova.
    printf("Digite a 1ª nota da prova: ");
    scanf("%f", &not1);
    printf("Digite a 2ª nota da prova: ");
    scanf("%f", &not2);
    printf("Digite a 3ª nota da prova: ");
    scanf("%f", &not3);

    //Calculando média ponderada.
    medPond = (not1 + not2 + (not3 * 2)) / 4;

    //Informando média e situação do aluno.
    if(medPond >= 60){
        printf("\n==== APROVADO(A) ====\nMÉDIA: %.2f\n\n", medPond);
    }else{
        printf("\n==== REPROVADO(A) ====\nMÉDIA: %.2f\n\n", medPond);
    } 
}