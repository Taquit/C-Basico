#include <stdio.h>
#include <process.h>

void main() {

    float vol,areabase,altura;

    printf("Este programa calcula el volumen de la piramide de Keops, mide 230 metros de largo en su base y 146 metros de lato. Cual sera el volumen de la piramide?\n");

    areabase = 230*230;
    altura = 146;
    vol=areabase*altura*1/3;
    printf("El volumend de la piramide de Keops es de: %.2f cm^3\n",vol);
    system("PAUSE");

}
