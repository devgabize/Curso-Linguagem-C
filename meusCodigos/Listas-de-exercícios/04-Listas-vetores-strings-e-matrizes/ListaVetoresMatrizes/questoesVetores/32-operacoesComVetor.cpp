#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

/*QUESTÃO 32 - Leia dois vetores de inteiros x e y, cada um com 5 elementos (assuma que o usuário não
informa elementos repetidos). Calcule e mostre os vetores resultantes em cada caso
abaixo:
    • Soma entre x e y: soma de cada elemento de x com o elemento da mesma posição
    em y.
    • Produto entre x e y: multiplicação de cada elemento de x com o elemento da mesma
    posição em y.
    • Diferença entre x e y: todos os elementos de x que não existam em y.
    • Interseção entre x e y: apenas os elementos que aparecem nos dois vetores.
    • União entre x e y: todos os elementos de x, e todos os elementos de y que não
    estão em x.*/

using namespace std;

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    int x[5], y[5], soma[5], produto[5], diferenca[5], inter[5], uniao[10], contInter = 0, contUniao = 0, verif = 0;

    //Lendo os valores dos vetores x e y.
    cout << "\nDIGITE 5 VALORES INTEIROS:\n";
    for(int i = 0; i < 5; i++){
        cout << "Digite o valor: ";
        cin >> x[i];
    }

    cout << "\nDIGITE 5 VALORES INTEIROS:\n";
    for(int i = 0; i < 5; i++){
        cout << "Digite o valor: ";
        cin >> y[i];
    }

    //Calculando a soma entre os vetores.
    for(int i = 0; i < 5; i++){
        soma[i] = x[i] + y[i];
    }

    //Calculando o produto entre os vetores.
    for(int i = 0; i < 5; i++){
        produto[i] = x[i] * y[i];
    }

    //Calculando a diferença entre os vetores.
    for(int i = 0; i < 5; i++){
        diferenca[i] = x[i] - y[i];
    }

    //Analisando os dois vetores e verificando os elemientos iguais entre eles.
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(x[i] == y[j]){
                for(int k = 0; k < contInter; k++){
                    if(x[i] != inter[k]){
                        verif++;
                    }
                }
            }else{
                verif = 1;
            }
        }
        if(verif == contInter){
            inter[contInter] = x[i];
            contInter++;
        }
        verif = 0;
        
    }

    //Unindo os dois vetores.
    //Adicionando todos os elementos de x.
    for(int i = 0; i < 10; i++){
        uniao[i] = x[i];
        contUniao++;
    }

    verif = 0;
    //Adicionando os elementos de y e verificando se já existe algum elemento no vetor uniao.
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < contUniao; j++){
            if(y[i] != uniao[j]){
                verif++;
            }
        }
        if(verif == contUniao){
            uniao[contUniao] = y[i];
            contUniao++;
        }
        verif = 0;
    }

    //Mostrando resultados na tela.
    //Soma.
    cout << "\nVETOR SOMA: { ";
    for(int i = 0; i < 5; i++){
        cout << soma[i] << " ";
    }
    cout << "}\n";

    //Produto.
    cout << "\nVETOR PRODUTO: { ";
    for(int i = 0; i < 5; i++){
        cout << produto[i] << " ";
    }
    cout << "}\n";

    //Diferença.
    cout << "\nVETOR DIFERENÇA: { ";
    for(int i = 0; i < 5; i++){
        cout << diferenca[i] << " ";
    }
    cout << "}\n";

    //Interseção.
    cout << "\nVETOR INTERSEÇÃO: { ";
    for(int i = 0; i < contInter; i++){
        cout << inter[i] << " ";
    }
    cout << "}\n";

    //União.
    cout << "\nVETOR UNIÃO: { ";
    for(int i = 0; i < contUniao; i++){
        cout << uniao[i] << " ";
    }
    cout << "}\n\n";

    return 0;
}