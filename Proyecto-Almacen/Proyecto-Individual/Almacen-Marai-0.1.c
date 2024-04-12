//
// Created by Desktop on 10/04/2024.
//
#include <stdio.h>


void menu(){
    printf("1)Altas\n2)Listar\n.\n.\n.\n8)Salir\n");
    printf("Ingresa opcion:");

}

int main() {
    int opt;

    do{
        menu();
        scanf("%i",&opt);
        switch (opt) {
            case 1:
                printf("-----Bienvenido al modulo de altas-----\n");
                break;
            case 2:
                printf("-----Listar----\n");
                break;
            case 8:
                printf("Estas saliendo del progrma...");
                break;
            default:
                printf("<----->Ingresaste una opcion incorrecta<----->\n");
                break;
        }

    } while (opt!=8);

    return 0;
}
