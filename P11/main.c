#include <stdio.h>

void main() {
    float minutos,horas,segundos,sec;

    sec = 3700;
    minutos = sec/60;
    horas = sec/3600;
    printf("Este programa convierte de segundos a minutos y horas. \na)3700\nb)12320\nc)22710\n");
    printf("\nLa opcion a minutos es: %.1f", minutos);
    printf("\nLa opcion a en horas es: %.1f\n",horas);
    sec =12320;
    minutos = sec/60;
    horas = sec/3600;
    printf("\nLa opcion b minutos es: %.2f", minutos);
    printf("\nLa opcion b en horas es: %.2f\n",horas);
    sec =22710;
    minutos = sec/60;
    horas = sec/3600;
    printf("\nLa opcion c minutos es: %.2f", minutos);
    printf("\nLa opcion c en horas es: %.2f",horas);


}
