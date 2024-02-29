#include <stdio.h>
#include <process.h>

void main() {
    int num1, num2,num3,aux,aux2;

    printf("Se van a introducir 3 numeros.\n"
           "Introduce el tuyo:");
    scanf("%i",&num1);
    printf("Introduce el tuyo:");
    scanf("%i",&num2);
    printf("Introduce el tuyo:");
    scanf("%i",&num3);
    aux=num2-1;
    aux2=num2+1;
    if((aux==num1)&&(aux2==num3)){
        printf("Se introdujeron de forma correcta\n");
    } else{
        printf("Error. Introducidos de forma incorrecta\n");
    }

    system("PAUSE");
}
