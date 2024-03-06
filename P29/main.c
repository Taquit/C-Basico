#include <stdio.h>

void main() {
    int opt;
    printf("Introduzaca un numero que represente un numero de la semana:");
    scanf("%i",&opt);

    switch (opt) {
        case 1:
            printf("El dia de la semana es Lunes");
            break;
        case 2:
            printf("El dia de la semana es Martes");
            break;
        case 3:
            printf("El dia de la semana es Miercoles");
            break;
        case 4:
            printf("El dia de la semana es Jueves");
            break;
        case 5:
            printf("El dia de la semana es Viernes");
            break;
        case 6:
            printf("El dia de la semana es Sabado");
            break;
        case 7:
            printf("El dia de la semana es Domingo");
            break;
        default:
            printf("Numero no valido");
            break;
    }

}
