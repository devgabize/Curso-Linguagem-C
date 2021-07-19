#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>

int testeQuadradoPerfeito(int num){
    int a = sqrt(num);
    if(num > 0 && pow(a,2) == num){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int num;

    printf("Digite um valor: ");
    scanf("%d", &num);

    //Chamando a função.
    switch(testeQuadradoPerfeito(num)){
        case 1:
            printf("\n %d é um quadrado perfeito!\n\n", num);
            break;
        case 0:
            printf("\n %d não é um quadrado perfeito!\n\n", num);
            break;
    }

    //Retorno da função.
    return 0;
}