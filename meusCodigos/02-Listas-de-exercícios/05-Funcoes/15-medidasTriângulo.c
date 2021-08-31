#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int determinaSeAsMedidasFormamUmTriangulo(float a, float b, float c){
    if((a + b) > c && (a + c) > b && (b + c) > a){
        printf("\nAs medidas formam um triângulo");
        return 1;
    }else{
        printf("\nAs medidas não formam um triângulo!\n\n");
        return 0;
    }
}

void determinaTrianguloQueAsMedidasFormam(float a, float b, float c){
    if(a == b && a == c){
        printf(" EQUILÁTERO!\n\n");
    }else if(a == b || a == c || b == c){
        printf(" ISÓSCELES!\n\n");
    }else {
        printf(" ESCALENO!\n\n");
    }
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float med1, med2, med3;
    int controle = 0;

    printf("INFORME AS MEDIDAS DO TRIÂNGULO!\n");
    do{
        printf("Medida 1: ");
        scanf("%f", &med1);
        printf("Medida 2: ");
        scanf("%f", &med2);
        printf("Medida 3: ");
        scanf("%f", &med3);
        if(med1 > 0 && med2 > 0 && med3 > 0){
            controle = 1;
        }else{
            printf("\nAS MEDIDAS DEVEM SER MAIORES QUE ZERO!\n\n");
        }

    }while(controle == 0);

    //Chamando funções.
    if(determinaSeAsMedidasFormamUmTriangulo(med1, med2, med3) == 1){
        determinaTrianguloQueAsMedidasFormam(med1, med2, med3);
    };

    //Retorno da função.
    return 0;
}