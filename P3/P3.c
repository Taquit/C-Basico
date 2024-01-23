#include <stdio.h>

int main()
{
    int cuadradoL;
    int rectanguloB;
    int rectanguloA;
    int trianguloL;
    int trianguloA;
    printf("Este programa te ayudara a calcular el area de un cuadrado, rectangulo, triangulo equilatero\n");
    printf("\nIntroduce la medida del lado del cuadrado: ");
    scanf("%d", &cuadradoL);
    printf("\nIntroduce la medida de la base del rectandulo: ");
    scanf("%d", &rectanguloB);
    printf("\nIntroduce la medida de la altura del rectangulo: ");
    scanf("%d", &rectanguloA);
    printf("\nIntroduce la medida del lado del triangulo equilatero: ");
    scanf("%d", &trianguloL);
    printf("\nIntroduce la altura del triangulo: ");
    scanf("%d", &trianguloA);

    int cuadrado = cuadradoL * cuadradoL;
    int triangulo = (trianguloA*trianguloL)/2;
    int rectangulo = rectanguloA * rectanguloB;

    printf("\nEl area del cuadrado es: %d unidades cubicas ", cuadrado);
    printf("\nEl area del rectangulo es: %d unidades cubicas ", rectangulo);
    printf("\nEl area del triangulo es: %d unidades cubicas", triangulo);
    return 0;
}
