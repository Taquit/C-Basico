#include <stdio.h>

void main() {
    int opt;
    float x,y,suma,resta,division,mul,division;
    printf("Las opciones son\n1-Suma\n2-Resta\n3-Multiplicacio\n4-Division");
    printf("Introduzca el valor de x:");
    printf("Introduzca el valor de y:");
    scanf("%f",&x);
    scanf("%f",&y);

    switch (opt) {
        case 1:
            suma = x+y;
            printf("La suma de %.2f y %.2f es %.2f",x,y,suma);
            break;
        case 2:
            resta = x-y;
            printf("La resta de %.2f y %.2f es %.2f",x,y,resta);
            break;
        case 3:
            mul = x*y;
            printf("La multiplicacion de %.2f y %.2f es %.2f",x,y,mul);
            break;
        case 4:
            suma = x/y;
            printf("La division de %.2f y %.2f es %.2f",x,y,division);
            break;
        default:
            printf("Introduzca un valor valido");
    }

}
