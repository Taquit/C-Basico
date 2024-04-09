#include <stdio.h>

void menu(){
    printf("1)Altas\n2)Listar\n.\n.\n.\n8)Salir\n");
}

int main() {
    int opt;
    menu();
    printf("Inpresa opcion:");
    scanf("%i",&opt);
    do{
        switch (opt) {
            case 1:
                printf("Ingresaste a las altas\n");
                break;
            case 2:
                printf("Ingresaste a listar\n");
                break;
            case 8:
                printf("Estas saliendo del programa\n");
                return 0;
            default:
                printf("Ingresaste una opcion incorrecta\n");
                menu();
                break;
        }
    } while (opt=!8);

    return 0;
}
