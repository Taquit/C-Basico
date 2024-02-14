#include <stdio.h>
#include <process.h>

void main() {

    float areaxPersona,numPersona;
    printf("Este programa calcula la cantidad de gente que cabe en el zocalo que tiene un area de 44160 m cuadrado, sabiendo que en 100 m cuadrados cabe 230 personas \n");

    areaxPersona = 44160/100;
    numPersona = areaxPersona *230;

    printf("\nEl numero de personas que caben en el zocale es de: %.1f personas\n",numPersona);
    system("PAUSE");
}
