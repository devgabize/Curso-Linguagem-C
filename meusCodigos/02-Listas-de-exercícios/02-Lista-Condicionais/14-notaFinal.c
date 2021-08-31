#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 14 - A nota final de um estudante é calculada a partir de três notas atribuı́das entre o intervalo de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral
e a um exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float trabLab, avaSemest, ExaFinal, media;

    //Lendo nota.
    printf("Digite a nota do trabalho de laboratório: ");
    scanf("%f", &trabLab);
    printf("Digite a nota da avaliação semestral: ");
    scanf("%f", &avaSemest);
    printf("Digite a nota do exame final: ");
    scanf("%f", &ExaFinal);

    //Testando se as notas estão entre 0 e 10.
    if(trabLab >= 0 && trabLab <= 10 && avaSemest >= 0 && avaSemest <= 10 && avaSemest >= 0 && avaSemest <= 10){
        //Calculando média.
        media = ((trabLab * 2) + (avaSemest * 3) + (ExaFinal * 5)) / 10;

        //Mostrando situação do aluno na tela.
        if(media >= 0 && media <= 2.9){
            printf("\nALUNO REPROVADO!\nMÉDIA: %.1f\n\n", media);
        }else if(media >= 3 && media <= 4.9){
            printf("\nALUNO EM RECUPERAÇÃO!\nMÉDIA: %.1f\n\n", media);
        }else{
            printf("\nALUNO APROVADO!\nMÉDIA: %.1f\n\n", media);   
        }
    }else{
        printf("\n #### NOTA INFORMADA INVÁLIDA! DIGITE A NOTA DE 0 ATÉ 10.####\n\n");
    }
}