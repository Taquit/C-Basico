#include <stdio.h>
#include <process.h>
#include <math.h>

void main() {
    float a,b,c,x,y;
    double aux;
    printf("Programa para enocntrar solucion a polinomios de segundo grado\n");
    printf("Introduzca a:");
    scanf("%f",&a);
    printf("Introduzca b:");
    scanf("%f",&b);
    printf("Introduzca c:");
    scanf("%f",&c);
    aux = (pow(b,2))-(4*a*c);

    if (aux>0){
        x = (-b + sqrt(aux)) / (2 * a);
        y = (-b - sqrt(aux)) / (2 * a);
        printf("El resultado de x1 es %.2f.\n El resultado de x2 es %.2f\n",x,y);
    } else{
        printf("El resultado no existe\n");
    }
    system("PAUSE");
}
