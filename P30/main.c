#include <stdio.h>

void main() {
    int hora24;
    float min;

    printf("Introduce la hora de salida:");
    scanf("%i",&hora24);
    printf("Introduce los minutos:");
    scanf("%f",&min);
    switch (hora24) {
        case 13:
            printf("Trabjaste hasta la 1:%.0fpm",min);
            break;
        case 14:
            printf("Trabjaste hasta la 2:%.0fpm",min);
            break;
        case 15:
            printf("Trabjaste hasta la 3:%.0fpm1",min);
            break;
        case 16:
            printf("Trabjaste hasta la 4:%.0fpm",min);
            break;
        case 17:
            printf("Trabjaste hasta la 5:%.0fpm",min);
            break;
        case 18:
            printf("Trabjaste hasta la 6:%.0fpm",min);
            break;
        case 19:
            printf("Trabjaste hasta la 7:%.0fpm",min);
            break;
        case 20:
            printf("Trabjaste hasta la 8:%.0fpm",min);
            break;
        case 21:
            printf("Trabjaste hasta la 9:%.0fpm",min);
            break;
        case 22:
            printf("Trabjaste hasta la 10:%.0fpm",min);
            break;
        case 23:
            printf("Trabjaste hasta la 11:%.0fpm",min);
            break;
        case 24:
            printf("Trabjaste hasta la 12:%.0fpm",min);
            break;
        default:
            if(hora24==12){
                printf("Trabajaste hasta la %i:%.0fpm",hora24,min);
            }
            if(hora24>24){
                printf("Introduzca horario correctamente");
            }
            if(hora24<12){
                printf("Trabajaste hasta la %i:%.0fam",hora24,min);

            }
    }

}
