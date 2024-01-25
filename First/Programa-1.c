#include <stdio.h>

void main()
{
    float num1, num2, mul, suma, resta;
    printf("\nEste programa hara las siguientes operaciones (con enteros): suma, resta, multiplicacion");
    printf("\nIntroduce primer numero (entero): ");
    scanf("%f", & num1);
    printf("\n Introduce segundo numero (entero): ");
    scanf("%f", & num2);

    suma = num1 + num2 ;
    resta = num1 - num2;
    mul = num1 * num2;

    printf("\n La suma seria: %.2f " ,suma);
    printf("\n La resta es: %.2f " , resta);
    printf("\n La multiplicacion es: %.2f \n" , mul);
    system("PAUSE");
}
