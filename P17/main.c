#include <stdio.h>
#include <process.h>

void main() {
    float costo,total;
    printf("Dame el costo:");
    scanf("%f",&costo);
    if(costo>10000)
        {
            total=costo*0.75;
            printf("\nEl total con descuento es:%.2f\n",total);
        }
    else
        printf("\nEl total sin el descuento es de:%.2f\n",costo);
    system("PAUSE");
}
