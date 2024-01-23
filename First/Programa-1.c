#include <stdio.h>

int main()
{
    int num1, num2, mul, suma, resta;
    printf("\nEste programa hara las siguientes operaciones (con enteros): suma, resta, multiplicacion");
    printf("\nIntroduce primer numero (entero): ");
    scanf("%d", & num1);
    printf("\n Introduce segundo numero (entero): ");
    scanf("%d", & num2);

    suma = num1 + num2 ;
    resta = num1 - num2;
    mul = num1 * num2;

    printf("\n La suma seria: %d " ,suma);
    printf("\n La resta es: %d " , resta);
    printf("\n La multiplicacion es: %d " , mul);
    return 0;
}
