#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    //Para utilizar acentos.
    setlocale(LC_ALL, "");

    int a = 97, *pont1;
    float b = 4.2, *pont2;
    char c = 'G', *pont3;

    pont1 = &a;
    pont2 = &b;
    pont3 = &c;

    printf("\nANTES DOS PONTEIROS:\n a = %d  b = %.1f  c = %c\n\n", a, b, c);

    *pont1 = 16;
    *pont2 = 9.7;
    *pont3 = 'P';
    
    printf("\nDEPOIS DOS PONTEIROS:\n a = %d  b = %.1f  c = %c\n\n", a, b, c);
    
    //Retorno da Função.
    return 0;
}