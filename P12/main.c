#include <stdio.h>
#include <process.h>

void main() {

    float precioOriginal;
    printf("Por la Laptop que tenia un descuento del 25 porciento se terminaron pagando $15115 pesos. Que precio tenia originalmente?\n");
    precioOriginal = 15115/(1-0.25);
    printf("El precio original de la Laptop es de %.2f pesos\n",precioOriginal);
    system("PAUSE");
}
