//
// Created by Desktop on 20/03/2024.
//
#include <stdio.h>
#include <process.h>
#include <math.h>

void main(){

    int resul;
    printf("Programa que imprime el resultado de la ecuacion\n");
    for (int i = 2; i <= 40; i=i+2) {
        resul = pow(i,4)-8*pow(i,2)-14*i+7;
        printf("x en %i, el resultado de la ecuacion es %i\n",i,resul);
    }

    system("PAUSE");
}