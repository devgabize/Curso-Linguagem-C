#include<fstream>
#include<string>
#include<iostream>

using namespace std;

int main(){
    
    //Dizer qual arquivo será lido.
    ifstream input("aula01SóComC.txt");

    //String que receberá o texto lido.
    string textoLido;

    //Passa o texto do arquivo para a string.
    for(string line; getline(input, line);){
        textoLido += line;
    }

    //Mostrar o conteúdo.
    cout << textoLido << "\n\n";

    return 0;
}