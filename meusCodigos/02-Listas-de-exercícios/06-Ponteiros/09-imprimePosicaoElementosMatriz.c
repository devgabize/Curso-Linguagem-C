#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    float mat[3][3] = {1.5, 3.2, 4.9, 
                       6.1, 9.7, 14.3, 
                       20.6, 8.4, 24.9}, *pont;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            pont = &mat[i][j];
            printf("\nElemento[%d][%d] posição = %d\n", i, j, pont);
        }
    }
    //Retorno da função.
    return 0;
}