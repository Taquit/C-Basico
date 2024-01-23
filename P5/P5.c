#include <stdio.h>

int main()
{
    float far;
    printf("Este programa te ayudara a hacer la conversion de grados Fahrenehit a Celsius y Kelvin");
    printf("\nIntroduce los grados Fahrenheit: ");
    scanf("%f", & far);

    float cel = (5.0/9.0)*(far-32.0) ;
    float kel = (5.0/9.0)*(far+459.67);

    printf ("\nEl resultado en C es: %.4f", cel);
    printf ("\nEl resultado en K es: %.4f", kel);
    return 0;
}
