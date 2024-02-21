#include <stdio.h>
#include <process.h>

void main() {
    float m1,m2,m3,m4,m5,promedio;
    printf("Introduzca calificacion 1:");
    scanf("%f",&m1);
    printf("Introduzca calificacion 2:");
    scanf("%f",&m2);
    printf("Introduzca calificacion 3:");
    scanf("%f",&m3);
    printf("Introduzca calificacion 4:");
    scanf("%f",&m4);
    printf("Introduzca calificacion 5:");
    scanf("%f",&m5);
    promedio = (m1+m2+m3+m4+m5)/5;
    if (promedio >9.5){
        printf("Tu promedio es %.2f \nObtendras un premio a mejor promedio\n",promedio);
    } else{
        printf("Tu promedio es %.2f  por lo que es menor a 9.5\n",promedio);
    }
    system("PAUSE");

}
