#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void lerNotasValidas(float *nota1, float *nota2){
    float  a, b, test = 0;
    printf("\nDIGITE AS DUAS NOTAS DO ALUNO!\n");
    do{
        printf("Digite a primeira nota: ");
        scanf("%f", &a);
        printf("Digite a segunda nota: ");
        scanf("%f", &b);
        if(a > 0.0 && b > 0.0){
            test = 1;
            *nota1 = a;
            *nota2 = b;
        }else{
            printf("\nNOTAS INVÁLIDAS! Devem valores positivos, digite novamente!\n\n");
        }
    }while(test == 0);
}

void calculaMediaArtPond(float nota1, float nota2, float *medArt, float *medPond){
    *medArt = (nota1 + nota2) / 2.0;
    *medPond = (nota1 + (nota2 * 2.0)) / 3.0;
}

int main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float nota1, nota2, medArt, medPond;

    //Lendo as notas e chamando a função.
    lerNotasValidas(&nota1, &nota2);

    //Calculando médias e chamando função.
    calculaMediaArtPond(nota1, nota2, &medArt, &medPond);

    //Mostrando resultado.
    printf("\nNotas digitadas:\n%.2f\n%.2f\n---------------\n", nota1, nota2);
    printf("MÉDIA: %.2f\nMÉDIA PONDERADA: %.2f\n---------------\n\n", medArt, medPond);
}