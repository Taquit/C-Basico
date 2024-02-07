//
// Created by Desktop on 06/02/2024.
//



#include <process.h>
#include <stdio.h>

void main(){

    float tanque,costoTanque,costoPeso;

    printf("Un turista Mexicano viaja en automovil a Estados Unidos, pero, al detenerse a cargar gasolina descubre que las gasolineras despachan el combustible por galon a 3.13 dolares. Sabiendo que su tanque de combustible tiene una capacidad de 35 litros y que el dolar equivale a 21 pesos ademas de que un galon equivale a 3.78 litros, Cuanto le costara llenar su tanque de gasolina, en pesos\n");
    tanque = 38/3.78;
    costoTanque =tanque*3.13;
    costoPeso = costoTanque*21;

    printf("El costo de llenar su tanque en pesos seria $%.2f pesos\n",costoPeso);
    system("\nPAUSE");
}