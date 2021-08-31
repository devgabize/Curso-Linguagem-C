#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*QUESTÃO 22 - Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado,
uma sequência arbitrária de notas (válidas no intervalo de 10 a 20) e que mostre na tela, como resultado, a correspondente média aritmética. O número de notas com que o aluno pretenda efetuar o cálculo não será fornecido ao programa, o qual terminará quando for introduzido um valor que não seja válido como nota de aprovação.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float nota, somaNota = 0, qtdNotas = 0;

    //Lendo as notas e realizando a soma das notas.
    printf("\nDigite as notas entre 10 e 20! Para encerrar o programa, digite uma nota fora do intervalo!\n");
    do{
        printf("Digite a nota: ");
        scanf("%f", &nota);
        if(nota >= 10.0 && nota <= 20.0){
            somaNota += nota;
            qtdNotas++;
        }
    }while(nota >= 10.0 && nota <= 20.0);

    printf("\nFINALIZANDO PROGRAMA...\n");
    printf("MÉDIA = %.1f\n", (somaNota / qtdNotas));
    printf("\nPROGRAMA FINALIZADO!\n\n");

}