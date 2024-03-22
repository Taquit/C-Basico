//
// Created by Desktop on 20/03/2024.
//
#include <stdio.h>
#include <process.h>

void main(){

    printf("Asientos disponibles:\n");
    for (int i = 50; i >=10 ; i=i-1) {

        printf("Disponible: %i\n",i);
    }

    system("PAUSE");
}