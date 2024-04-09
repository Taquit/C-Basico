#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float suma ;

    printf("Ingrese el valor de n:\n");
    scanf("%i", &n);

    for (int i = 1; i <= n; ++i) {
        suma += i/(2.0*i);
    }

    printf("La suma de la sucesion hasta n = %i es: %.2f\n", n, suma);

    system("PAUSE");
    return 0;
}