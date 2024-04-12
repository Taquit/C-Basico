//
// Created by Desktop on 10/04/2024.
//
#include <stdio.h>
#include <string.h>

void menu(){
    printf("1)Altas\n2)Listar\n.\n.\n.\n8)Salir\n");
    printf("Ingresa opcion:");

}
void altas(char nombre[][26],int id[],int preorden[],int existencia[],float precio[],int total){
    printf("Dame el nombre del producto:");

    fgets(nombre[total], 26, stdin);

    printf("Dame la existencia:");
    scanf("%i",&existencia[total]);
    printf("Dame el precio:");
    scanf("%f",&precio[total]);
    getchar();
    printf("Dame el punto de re-orden:");
    scanf("%i",&preorden[total]);
    getchar();
    id[total]=total+1;
    printf("Alta exitosa!\n");


}

int main() {
    int opt,id[20],preorden[20],existencia[20],total=0;
    float precio[20];
    char nombre[20][26];


    do{
        menu();
        scanf("%i",&opt);
        switch (opt) {
            case 1:
                printf("-----Bienvenido al modulo de altas-----\n");
                //altas(nombre,id,preorden,existencia,precio,total);
                printf("Dame el nombre del producto:");

                fgets(nombre[total], 26, stdin);

                printf("Dame la existencia:");
                scanf("%i",&existencia[total]);
                printf("Dame el precio:");
                scanf("%f",&precio[total]);
                getchar();
                printf("Dame el punto de re-orden:");
                scanf("%i",&preorden[total]);
                getchar();
                id[total]=total+1;
                printf("Alta exitosa!\n");

                total++;
                printf("%s\n",nombre[0]);
                printf("%s\n",nombre[1]);
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
