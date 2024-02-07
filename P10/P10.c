//
// Created by Desktop on 06/02/2024.
//
#include <stdio.h>
#include <process.h>

void main(){
    float a,b,c,d,e,f,x,y;

    printf("Paty debe obtener los valores de ”x” y “y”. Ella dedujo que a traves de las formulas siguientes, se puede llegar a la solución de las mismas. Por lo que decidio crear un programa que, introduciendo los valores de los coeficientes (a, b, c, d, e, f); este de el resultado de “x” y “y”.");
    printf("\nIntroduce el valor de a:");
    scanf("%f",&a);
    printf("\nIntroduce el valor de b:");
    scanf("%f",&b);
    printf("\nIntroduce el valor de c:");
    scanf("%f",&c);
    printf("\nIntroduce el valor de d:");
    scanf("%f",&d);
    printf("\nIntroduce el valor de e:");
    scanf("%f",&e);
    printf("\nIntroduce el valor de f:");
    scanf("%f",&f);

    x = ((c*e)-(b*f))/((a*e)-(b*d));
    y = ((a*f)-(c*d))/((a*e)-(b*d));

    printf("\nEl valor de x es: %.2f", x);
    printf("\nEl valor de y es: %.2f\n", y);
    system("PAUSE");
}
