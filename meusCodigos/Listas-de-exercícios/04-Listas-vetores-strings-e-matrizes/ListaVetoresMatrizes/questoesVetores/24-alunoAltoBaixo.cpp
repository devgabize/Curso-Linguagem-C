#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 24 - Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o
número do aluno e o segundo representando a sua altura em metros. Encontre o aluno mais baixo e o mais alto. Mostre o número do aluno mais baixo e do mais alto, juntamente com suas alturas.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int num[10], i = 0, codAlto, codBaixo, posiAlto, posiBaixo;
    float altura[10];

    //Lendo o número do aluno e sua altura.
    for(i = 0; i < 10; i++){
        cout << "\nDIGITE O NÚMERO DO ALUNO: ";
        cin >> num[i];
        cout << "\nDIGITE A ALTURA DO ALUNO: ";
        scanf("%f", &altura[i]);
    }

    //Inicializando as variáveis do aluno mais alto e do mais baixo.
    codAlto = 0;
    posiAlto = 0;
    codBaixo = 0;
    posiBaixo = 0;

    //Analisando vetor e verificando o aluno mais alto e o mais baixo.
    for(i = 0; i < 10; i++){
        if(altura[i] > altura[posiAlto]){
            posiAlto = i;
            codAlto = i;
        }else if(altura[i] < altura[posiBaixo]){
            posiBaixo = i;
            codBaixo = i;
        }
    }

    //Mostrando número do aluno mais baixo e do mais alto, juntamente com suas alturas.
    cout << "\nALUNO MAIS BAIXO:\n  NÚMERO: " << num[codBaixo] << "\n   ALTURA: " << altura[posiBaixo] << "\n";
    cout << "\nALUNO MAIS ALTO:\n  NÚMERO: " << num[codAlto] << "\n   ALTURA: " << altura[posiAlto] << "\n\n";

}