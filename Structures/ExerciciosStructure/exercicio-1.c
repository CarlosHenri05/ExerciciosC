#include <stdio.h>
#include <string.h>

struct Horario
{
    int hora;
    int minutos;
    int segundos;
};
struct Data
{
    int dia;
    int mes;
    int ano;
};
struct Compromisso
{
    struct Data data;
    struct Horario horario;
    char evento[30];
};

int main()
{

    struct Compromisso compromisso;

    compromisso.data.dia = 25;
    compromisso.data.mes = 12;
    compromisso.data.ano = 2025;

    compromisso.horario.hora = 12;
    compromisso.horario.minutos = 25;
    compromisso.horario.segundos = 30;

    strcpy(compromisso.evento, "Saída");

    printf("Data: %d/%d/%d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
    printf("Hora: %d:%d:%d\n", compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos);
    printf("Evento: %s ", compromisso.evento);
}