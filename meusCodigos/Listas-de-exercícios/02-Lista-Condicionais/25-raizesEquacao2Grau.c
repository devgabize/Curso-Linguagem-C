#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h> //Para calcular quadrados e raizes.

/*Questão 25 - Calcule as raı́zes da equação de 2 o grau. Lembrando que: x = (-b +- raiz(∆)) / (2a), onde, ∆ = B² - 4ac. E, ax² + bx + c = 0 representa uma euqação de 2º grau.
A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não
é equação de segundo grau”.
• Se ∆ < 0, não existe real. Imprima a mensagem N~
ao existe raiz.
• Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz única.
• Se ∆ ≥ 0, imprima as duas raı́zes reais.*/

void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float x1, x2, a, b, c, delta;

    //Lendo os coeficientes da equação do 2º grau.
    printf("Informe os coeficientes da equação:\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    //Testando se a é diferente de zero.
    if(a != 0){
        //Calculando delta.
        delta = pow(b,2) - (4 * a * c);

        //Verificando delta.
        if(delta < 0){
            printf("\nDelta = %.2f, portando NÃO EXISTE RAIZ!\n\n", delta);
        }else if(delta == 0){
            printf("\nDelta = %.2f, portando EXISTE RAIZ ÚNICA!\n\n", delta);
        }else{
            //Calculando raizes.
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("\nA equação possui as raizes:\n   x1 = %.2f\n   x2 = %.2f\n\n", x1, x2);
        } 
    }else{
        printf("\na = %.2f, portando NÃO É UMA EQUAÇÃO DE SEGUNDO GRAU!\n\n", a);
    }
}