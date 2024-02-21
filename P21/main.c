#include <stdio.h>
#include <process.h>

void main() {
    int num;
    printf("Introduce la cantidad de articulos:");
    scanf("%i",&num);
    if(num>100){
        printf("Esta comprando a mayoreo\n");
    } else{
        printf("No es suficiente para comprar a mayoreo\n");
    }
    system("PAUSE");
}
