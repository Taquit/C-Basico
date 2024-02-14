#include <stdio.h>
#include <math.h>
#include <process.h>

void main() {
    float m1,m2,distance,fuerza,gravity,d;

    printf("El programa debera leer la masa de dos cuerpos y la distancia entre ellos y a continuacion obtenga la fuerza gravitacional entre ellas. La salida debe ser en dinas; un dina es igual a gr. cm/seg2.\n");
    printf("Introduce la masa 1:");
    scanf("%f",&m1);
    printf("\nIntroduce la masa 2:");
    scanf("%f",&m2);
    printf("\nIntroduce la distancia:");
    scanf("%f",&d);
    distance = pow (d,2.0);
    //printf("%f",distance);
    fuerza = (6.673 * pow(10.0, -8.0) * m1 * m2) / distance;
    printf("La fuerza entre las dos masas es de: %f gr cm^3/g. seg^2\n",fuerza );
    system("PAUSE");
}
