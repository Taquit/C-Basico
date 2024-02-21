#include <stdio.h>
#include <math.h>
#include <process.h>

void main() {
    int numBoleto;
    printf("Introduce los ultimos dos digitos del boleto:");
    scanf("%d",&numBoleto);

    if(numBoleto%5==0){
        printf("\nEs multiplo de 5\n");
    } else{
        printf("\nNo es multiplo de 5\n");
    }
    system("PAUSE");
}
