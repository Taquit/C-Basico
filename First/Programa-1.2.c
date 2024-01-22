#include <stdio.h>

int operaciones(int n1 , int n2, int suma, int resta, int mul);

int main()
{
    int n1, n2;

    printf("\nIntroduce primer numero (entero): ");
    scanf("%d", & n1);
    printf("\n Introduce segundo numero (entero): ");
    scanf("%d", & n2);
    operaciones(n1,n2,0,0,0);
    return 0;
}
 int operaciones(n1,n2,suma,resta,mul){
    suma = n1 + n2 ;
    resta = n1 - n2;
    mul = n1 * n2;
    printf("\n La suma seria: %d " ,suma);
    printf("\n La resta es: %d " , resta);
    printf("\n La multiplicacion es: %d " , mul);
}