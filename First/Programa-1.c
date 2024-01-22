#include <stdio.h>

int main()
{
    int n1, n2, mul, suma, resta;

    printf("\Introduce primer numero (entero): ");
    scanf("%d", & n1);
    printf("\n Introduce segundo numero (entero): ");
    scanf("%d", & n2);

    suma = n1 + n2 ;
    resta = n1 - n2;
    mul = n1 * n2;

    printf("\n La suma seria: %d " ,suma);
    printf("\n La resta es: %d " , resta);
    printf("\n La multiplicacion es: %d " , mul);
    return 0;
}
