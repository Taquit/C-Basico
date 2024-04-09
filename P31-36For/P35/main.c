#include <stdio.h>

int main() {
    int total_suma ;

    printf("Numeros de boleto:\n");
    for (int num = 2; num <= 40; num += 2) {
        printf("%d\n", num);
        total_suma += num;
    }

    printf("Total de la suma de todos los boletos: %d\n", total_suma);

    return 0;
}
