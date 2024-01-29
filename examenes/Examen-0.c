#include <stdio.h>

void main()
{
     float parcial1,parcial2,parcial3,promedio;

     printf("Este programa te calcula el promedio de 3 parciales");
     printf("\nIntroduce la primera calificacion:");
     scanf("%f", &parcial1);
     printf("\n Introduce la segunda calificacion:");
     scanf("%f", &parcial2);
     printf("\n Intoduce la tercera calificacion:");
     scanf("%f", &parcial3);

     promedio = (parcial1 + parcial2 +parcial3)/3.0;

     printf("\n Tu promedio es: %f \n", promedio);
    system("PAUSE");
}
