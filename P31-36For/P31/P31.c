#include <stdio.h>
#include <process.h>

void main (){

    printf("Imprime los turnos disponibles de la primera hora\n");
    for (int i = 1; i <= 20; ++i) {
        printf("Turnos disponibles: %i\n",i);
    }
    system("PAUSE");
}