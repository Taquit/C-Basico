#include <stdio.h>

void operaciones(int a, int b);

int main()
{
    
    int num1, num2;
    printf("\nIntroduce primer numero (entero): ");
    scanf("%d", & num1);
    printf("\nIntroduce segundo numero (entero): ");
    scanf("%d", & num2);

    operaciones(num1, num2);
    
    return 0;
}

void operaciones(int a, int b){

    printf("\nLa suma de %d + %d es: %d\n", a ,b , a + b);
    printf("La resta %d - %d es: %d\n", a , b, a - b);
    printf("La multiplicacion %d * %d es: %d\n", a , b, a * b);
   
}
