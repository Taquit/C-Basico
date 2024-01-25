#include <stdio.h>

void main()
{
    float cuadradoL, rectanguloB , rectanguloA , trianguloL , trianguloA, cuadrado, triangulo, rectangulo;
    
    printf("Este programa te ayudara a calcular el area de un cuadrado, rectangulo, triangulo equilatero\n");
    printf("\nIntroduce la medida del lado del cuadrado: ");
    scanf("%f", &cuadradoL);
    printf("\nIntroduce la medida de la base del rectandulo: ");
    scanf("%f", &rectanguloB);
    printf("\nIntroduce la medida de la altura del rectangulo: ");
    scanf("%f", &rectanguloA);
    printf("\nIntroduce la medida del lado del triangulo equilatero: ");
    scanf("%f", &trianguloL);
    printf("\nIntroduce la altura del triangulo: ");
    scanf("%f", &trianguloA);

    cuadrado = cuadradoL * cuadradoL;
    triangulo = (trianguloA*trianguloL)/2;
    rectangulo = rectanguloA * rectanguloB;

    printf("\nEl area del cuadrado es: %f unidades cubicas ", cuadrado);
    printf("\nEl area del rectangulo es: %f unidades cubicas ", rectangulo);
    printf("\nEl area del triangulo es: %f unidades cubicas", triangulo);
    system("PAUSE");
}
