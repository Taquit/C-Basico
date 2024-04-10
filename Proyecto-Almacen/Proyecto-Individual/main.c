#include <stdio.h>
#include <string.h>

void menu(){
    printf("1)Altas\n2)Listar\n.\n.\n.\n8)Salir\n");
}
//void altas(char x[]){
// printf("Ingresa el obj:");
//  fgets(x,50, stdin);
//  x[strcspn(x, "\n")] = '\0';
//}

int main() {
    int opt;
    char obj[50];
    menu();
    printf("Ingresa opcion:");
    scanf("%i",&opt);
    do{

        switch (opt) {
            case 1:
                printf("-----Ingresaste a las altas-----\nRegistra Altas\n");
                printf("%s", obj);
                break;
            case 2:
                printf("Ingresaste a listar\n");
                break;
            default:
                printf("Ingresaste una opcion incorrecta\n");
                menu();
                break;
        }
        printf("\nPresiona Enter para continuar...");
        getchar();

        menu();
        printf("Ingresa opcion:");
        scanf("%i",&opt);
    } while (opt!=8);
    printf("Estas saliendo del programa...");
    return 0;
}
