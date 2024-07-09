#include <stdio.h>

int main() {

    int hora_inicial, minuto_inicial, hora_final, minuto_final, horas, minutos;


    scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);


    horas = hora_final - hora_inicial;
    if(horas < 0){
        horas = horas + 24;
    }

    if(hora_inicial == hora_final && minuto_final == minuto_inicial){
        horas = 24;
        minutos = 0;
    }

    if(minuto_inicial < minuto_final){
        minutos = minuto_final - minuto_inicial;
    }

    if(minuto_inicial > minuto_final){
        minutos = 60 - (minuto_inicial - minuto_final);
        horas = horas - 1;
    }
    if(hora_inicial == hora_final && minuto_inicial < minuto_final){
        horas = 0;
        minutos = minuto_final - minuto_inicial;
    }


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    return 0;
}

