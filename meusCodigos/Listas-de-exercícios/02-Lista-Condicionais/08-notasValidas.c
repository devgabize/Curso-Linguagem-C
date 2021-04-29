#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 08 - Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e
exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um
valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser
informado ao usuário e o programa termina.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float nota1, nota2, media;

    //Lendo as 2 notas.
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);

    //Testando se as notas são válidas.
    if(nota1 >= 0.0 && nota1 <= 10.0 && nota2 >= 0.0 && nota2 <= 10.0){
        printf("\nMÉDIA = %.1f\n\n", ((nota1 + nota2) / 2));
    }else{
        printf("\n### NOTA(S) DIGITADAS NÃO SÃO VÁLIDAS! ###\n\n");
    }
}