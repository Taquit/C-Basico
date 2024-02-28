#include <stdio.h>

void main() {
    int edad;

    printf("Introduce tu edada para saber cuanto pagaras en el transporte RUTA.\n"
           "Introduce tu edad:");
    scanf("%i",&edad);

    if((edad >= 5 && edad <= 10) || (edad >= 60 && edad <= 80)){
        printf("Pagas la mitad de precio.\nSolo pagaras 5 pesos.");
    }else{
        if((edad<5)||(edad>80)){
            printf("No pagas pasaje");
        } else{
            printf("Pagas 10 pesos de pasaje");
        }
    }
}
