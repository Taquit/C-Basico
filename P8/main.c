#include <stdio.h>
#include <math.h>
#include <process.h>

void main() {
    int xLorena, yLorena,xJose,yJose;
    float distance,xs,ys;

    printf("Lorena y José son mejores amigos. Ellos viven muy lejos y quieren saber cuanta distancia hay entre sus casas. Ellos saben sus coordenadas por lo que deciden realizar un programa que calcule la distancia.\n");
    printf("\nLa cordenada x de Lorena es:");
    scanf("%i",&xLorena);
    printf("\nLa cordenada y de Lorena es:");
    scanf("%i",&yLorena);
    printf("\nLa cordenada x de Jose es:");
    scanf("%i", &xJose);
    printf("\nLa cordenada ^y de Jose es:");
    scanf("%i", &yJose);

    xs = pow((xJose-xLorena),2);
    ys = pow((yJose-yLorena),2);
    distance = sqrt(xs+ys);

    printf("\nLa distancia entre Jose y Lorena es de: %.2f unidades\n", distance);

    system("PAUSE");
}