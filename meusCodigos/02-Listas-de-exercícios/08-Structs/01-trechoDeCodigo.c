#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

typedef struct Horario{
    int hora;
    int minutos;
    int segundos;
}Horario;

typedef struct Data{
    int dia;
    int mes;
    int ano;
}Data;

struct Compromisso{
    Data data;
    Horario horario;
    char texto[255];
};

void main(){
    //Utilizar acentos.
    setlocale(LC_ALL, "");

    //Definindo variáveis.
    struct Compromisso agenda;

    //Criando compromisso.
    agenda.data.dia = 18;
    agenda.data.mes = 8;
    agenda.data.ano = 2021;
    agenda.horario.hora = 19;
    agenda.horario.minutos = 45;
    agenda.horario.segundos = 30;
    strcpy(agenda.texto, "Resolvido! ;)");

    //Mostrando compromisso.
    printf("\n-------------------------------\n--------- AGENDA 2021 ---------\n-------------------------------\n");
    printf("Dia: %d / %d / %d\nHora: %d:%d:%d\nCompromisso: %s", agenda.data.dia, agenda.data.mes,agenda.data.ano, agenda.horario.hora, agenda.horario.minutos, agenda.horario.segundos, agenda.texto);
    printf("\n-------------------------------\n\n");

}