#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 21 - Faça um programa que leia duas matrizes 2 x 2 com valores reais. Ofereça ao usuário
um menu de opções:
    (a) somar as duas matrizes
    (b) subtrair a primeira matriz da segunda
    (c) adicionar uma constante às duas matrizes
    (d) imprimir as matrizes
Nas duas primeiras opções uma terceira matriz 2 x 2 deve ser criada. Na terceira opção
o valor da constante deve ser lido e o resultado da adição da constante deve ser arma-
zenado na própria matriz.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int mat1[2][2], mat2[2][2], resultado[2][2], constante, opc;

    cout << "\nDIGITE OS VALORES DA MATRIZ 1:\n";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << "Digite um valor: ";
            cin >> mat1[i][j];
        }
    }

    cout << "\nDIGITE OS VALORES DA MATRIZ 2:\n";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << "Digite um valor: ";
            cin >> mat2[i][j];
        }
    }

    do{
        cout << "\n====== MENU OPÇÕES ======\n";
        cout << "(1) Somar as duas matrizes.\n(2) Subtrair a primeira matriz da segunda.\n(3) Adicionar uma constante às duas matrizes.\n(4) Imprimir as matrizes.\n(5) Sair.\n=========================\n";
        cout << "Digite uma opção: ";
        cin >> opc;

        switch(opc){
            case 1:
                for(int i = 0; i < 2; i++){
                    for(int j = 0; j < 2; j++){
                        resultado[i][j] = mat1[i][j] + mat2[i][j];
                    }
                }
                break;
            case 2:
                for(int i = 0; i < 2; i++){
                    for(int j = 0; j < 2; j++){
                        resultado[i][j] = mat2[i][j] - mat1[i][j];
                    }
                }
                break;
            case 3:
                cout << "Digite a constante a ser adicionada: ";
                cin >> constante;
                for(int i = 0; i < 2; i++){
                    for(int j = 0; j < 2; j++){
                        mat1[i][j] += constante;
                        mat2[i][j] += constante;
                    }
                }
                break;
            case 4:
                cout << "\nMatrizes digitadas:\nMATRIZ 1:\n";
                for(int i = 0; i < 2; i++){
                    for(int j = 0; j < 2; j++){
                        if(mat1[i][j] < 10){
                            cout << " " << mat1[i][j] << " ";
                        }else{
                            cout << mat1[i][j] << " ";  
                        }
                    }
                    cout << "\n";
                }
                cout << "\nMATRIZ 2:\n";
                for(int i = 0; i < 2; i++){
                    for(int j = 0; j < 2; j++){
                        if(mat2[i][j] < 10){
                            cout << " " << mat2[i][j] << " ";
                        }else{
                            cout << mat2[i][j] << " ";  
                        }
                    }
                    cout << "\n";
                }
                cout << "\nMatriz gerada (soma / subtração):\n";
                for(int i = 0; i < 2; i++){
                    for(int j = 0; j < 2; j++){
                        if(resultado[i][j] < 10){
                            cout << " " << resultado[i][j] << " ";
                        }else{
                            cout << resultado[i][j] << " ";  
                        }
                    }
                    cout << "\n";
                }
                break;
            case 5:
                cout << "\nPROGRAMA FINALIZADO!\n\n";
                break;
            default:
                cout << "\n## OPÇÃO DIGITADA É INVÁLIDA!Tente novamente! ## \n";
        }

    }while(opc != 5);
    return 0;
}