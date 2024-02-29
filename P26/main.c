#include <stdio.h>

void main() {
    float num1,num2,num3;
    printf("Introduce los 3 promedios en orden, para ver cual de los 3 se lleva el premio a mejor promedio\n");
    printf("Promedio 1:");
    scanf("%f",&num1);
    printf("Promedio 2:");
    scanf("%f",&num2);
    printf("Promedio 3:");
    scanf("%f",&num3);

    if((num1>num2)&&(num1>num3)){
        printf("El mejor promedio %.2f se lleva el premio",num1);
    }
    if((num2>num1)&&(num2>num3)){
        printf("El mejor promedio %.2f se lleva el premio",num2);
    }
    if((num3>num2)&&(num3>num1)){
        printf("El mejor promedio %.2f se lleva el premio",num3);
    }
}
