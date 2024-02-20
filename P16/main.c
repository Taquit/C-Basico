#include <stdio.h>
#include <process.h>

void main() {
    float saldo;
    printf("Dame el saldo:");
    scanf("%f",&saldo);
    if(saldo>0)
        printf("\nEl saldo es positivo\n");
    else
        printf("\nEl saldo es negativo\n");
    system("PAUSE");
}
