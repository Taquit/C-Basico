#include <stdio.h>
#include <process.h>

void main() {
    int n;
    printf("Introduce numero: \n");
    scanf("%i",&n);

    for (int i = 1; i <=10 ; ++i) {
        printf("Al multipicar %i por %i, el resultado es: %i \n",n,i,n*i);
    }

    system("PAUSE");
}
