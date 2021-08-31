#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Questão 33 - Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo,
calcule e escreva o preço novo, e escreva uma mensagem em função do preço novo (de
acordo com a segunda tabela).
                    ____________________________________________________
                    | PREÇO ANTIGO            | PERCENTUAL DE AUMENTO  |
                    | até R$ 50               |            5%          |
                    | entre R$ 50 e R$ 100    |           10%          |
                    | acima de R$ 100         |           15%          |
                    ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨
                    _________________________________________________________________
                    |              PREÇO NOVO              |        MENSAGEM        |
                    | até R$ 80                            |         Barato         |
                    | entre R$ 80 e R$ 120 (inclusive)     |         Normal         |
                    | entre R$ 120 e R$ 200 (inclusive)    |          Caro          |
                    | acima de R$ 200                      |       Muito caro       |
                    ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨*/
void main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float precoAntig, novoPreco;

    //Lendo preço antigo.
    printf("Digite o preço antigo do produto: ");
    scanf("%f", &precoAntig);

    //Analisando preço antigo e calculando o novo preço.
    if(precoAntig <= 50.0){
        novoPreco = precoAntig * (1.0 + (5.0 / 100.0)); 
    }else if(precoAntig > 50.0 && precoAntig <= 100.0){
        novoPreco = precoAntig * (1.0 + (10.0 / 100.0)); 
    }else{
        novoPreco = precoAntig * (1.0 + (15.0 / 100.0)); 
    }

    //Mostrando novo preço e mensagem de acordo com a faixa do novo preço.
    if(novoPreco <= 80.0){
        printf("\nNovo preço: R$%.2f (BARATO!)\n\n", novoPreco);
    }else if(novoPreco > 80.0 && novoPreco <= 120.0){
        printf("\nNovo preço: R$%.2f (NORMAL!)\n\n", novoPreco);
    }else if(novoPreco > 120.0 && novoPreco <= 200.0){
        printf("\nNovo preço: R$%.2f (CARO!)\n\n", novoPreco);
    }else{
        printf("\nNovo preço: R$%.2f (MUITO CARO!)\n\n", novoPreco);
    }

}