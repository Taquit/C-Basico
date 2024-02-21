#include <stdio.h>
#include <process.h>

void main() {
    int num;
    printf("Introduce tu numero:");
    scanf("%i",&num);
    if(num%2==0){
        printf("Tu numero es par, formate del lado derecho\n");
    } else{
        printf("Tu numero es impar, formate del lado isquierdo\n");
    }
    system("PAUSE");

}
