#include <stdio.h>
#include <process.h>

void main() {
    int fotos = 23+26+20;
    float costTotal,costoFoto;
    costTotal = 11.27+12.35+10.19;
    costoFoto = fotos /costTotal;

    printf("El costo total de las fotos es: %.2f dolares\n",costTotal);
    printf("El costo por fotografia es: %.2f dolares\n", costoFoto);

    system("PAUSE");
}
