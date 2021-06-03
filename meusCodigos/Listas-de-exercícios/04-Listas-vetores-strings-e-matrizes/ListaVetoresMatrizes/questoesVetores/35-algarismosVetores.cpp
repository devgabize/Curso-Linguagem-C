#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 35 - Faça um programa que leia dois números a e b (positivos menores que 10000) e:
• Crie um vetor onde cada posição é um algarismo do número. A primeira posição é
o algarismo menos significativo;
• Crie um vetor que seja a soma de a e b, mas faça-o usando apenas os vetores
construı́dos anteriormente.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL,"");

    //Definindo variáveis.
    int a, b, verif = 0, vetA[4], vetB[4], soma[4], contA = 0, contB = 0, aux, eleva = 0;

    //Lendo os números.
    cout << "\nDIGITE DOIS VALORES MENORES QUE 10000:\n";
    do{
        cout << "\nDigite um número inteiro: ";
        cin >> a;
        cout << "\nDigite mais um número inteiro: ";
        cin >> b;
        if(a < 10000 && b < 10000){
            verif = 1;
        }else{
            cout << "\n## NÚMERO DIGITADO FORA DO LIMITE MÁXIMO! ##\n          Digite novamente!\n\n";
        }
    }while(verif == 0);

    //Analisando números digitados, separando algarismos e armazenando nos vetores.
    //Tratando número da variável a.
    vetA[contA] = (a / 1000);
    a = a % 1000;
    contA++;
    vetA[contA] = (a / 100);
    a = a % 100;
    contA++;
    vetA[contA] = (a / 10);
    a = a % 10;
    contA++;
    vetA[contA] = a;
    contA++;//Só para não usao <= na hora de imprimir :D;

    //Tratando número da variável b.
    vetB[contB] = (b / 1000);
    b = b % 1000;
    contB++;
    vetB[contB] = (b / 100);
    b = b % 100;
    contB++;
    vetB[contB] = (b / 10);
    b = b % 10;
    contB++;
    vetB[contB] = b;
    contB++;//Só para não usao <= na hora de imprimir :D;

    cout << "\nALG A: { ";
    for(int i = 0; i < contA; i++){
        cout << vetA[i] << " ";
    }
    cout << "}\n\n";

    cout << "\nALG B: { ";
    for(int i = 0; i < contB; i++){
        cout << vetB[i] << " ";
    }
    cout << "}\n\n";

    cout << "\nAqui contA = " << contA << "\n";
    cout << "Aqui contB = " << contB << "\n\n";

    //Realizando a soma com os algarismos dos vetores.
    for(int i = 3; i >= 0; i--){
        if(i == 0){
            cout << "\nEleva aqui é: " << eleva << "\n\n";
            cout << "\ni aqui é: " << i << "\n\n";
            soma[i] = vetA[i] + vetB[i] + eleva;
        }else{
            aux = vetA[i] + vetB[i] + eleva;
            eleva = 0;
            if(aux < 10){
                soma[i] = aux;
            }else{
                soma[i] = (aux - 10);
                eleva = 1;
            }
            cout << "\ni aqui saindo do else é: " << i << "\n";
            cout << "soma[i] aqui saindo do else é: " << soma[i] << "\n\n";
        }
    }

    cout << "\nSOMA A + B: { ";
    for(int i = 0; i < 4; i++){
        cout << soma[i] << " ";
    }
    cout << "}\n\n";

    return 0;
}