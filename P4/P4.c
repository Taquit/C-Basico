#include <stdio.h>

int main()
{
    int x;
    printf("Este programa esta hecho para resolver el siguiente polinomio y=2x^3+3x^2-x, el usuario proporcionara el valor x\n");
    printf("\nIntroduzca el valor de x: ");
    scanf("%d", &x);
    int y = (2*(x*x*x))+(3*(x*x))-x;
    printf("\nEl resultado del polinomio cuando x es '%d' es: %d ", x,y);
    return 0;
}
