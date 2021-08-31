#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/*QUESTÃO 38 - Faça um programa que calcule o terno pitagórico a, b, c, para o qual a + b + c = 1000. Um terno pitagórico é um conjunto de três números naturais, a, b, c, para a qual,
                                        a² + b² = c²
Por exemplo,
                                3² + 4² = 9 + 16 = 25 = 5²*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    float a, b, c, i, j;
    float soma = 0;

    //Calculando o termo pitagórico.
    for(a = 1.0; a <= 500.0; a++){
        for(b = 1.0; b <= 500.0; b++){
            soma = (pow(a, 2.0) + pow(b, 2.0));
            c = sqrt(soma);
            if((a + b) == (1000.0 - c) && (sqrt(soma) == c)){
                printf("\nTERMO PITAGÓRICO:\n a = %.1f\n b = %.1f\n c = %.1f\n\n", a, b, c);
                b = 1000.0 + 1.0;
                a = 1000.0 + 1.0;
            }
        }
    }

}