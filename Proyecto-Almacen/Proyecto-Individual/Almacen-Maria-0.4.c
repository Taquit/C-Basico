//
// Created by Desktop on 15/04/2024.
//
//V0.4 Funcionamineto del case 4 donde se puede modificar la lista

#include <stdio.h>
#include <string.h>

void menu(){
    printf("-----Menu principal----");
    printf("\n1)Altas\n2)Listar\n3)Buscar producto\n4)Remplazos\n.\n8)Salir\n");
    printf("Ingresa opcion:");

}
void altas(char nombre[][25],int id[],int preorden[],int existencia[],float precio[],int total){
    printf("Dame el nombre del producto:");
    scanf("%s",&nombre[total]);
    printf("Dame la existencia:");
    scanf("%i",&existencia[total]);
    printf("Dame el precio:");
    scanf("%f",&precio[total]);
    printf("Dame el punto de re-orden:");
    scanf("%i",&preorden[total]);
    id[total]=total+1;
    printf("El id del producto es: %i\n",id[total]);
    printf("Alta exitosa!\n");

}
void imprimirObj(char nombre[][25],int id[],int preorden[],int existencia[],float precio[],int x){
    printf("ID.)Nombre  |\tPrecio  |\tExistencia  |\tPunto de reorden|\n");
    printf("%i.)%s|\t%.2f|\t%i|\t%i|\n",id[x],nombre[x],precio[x],existencia[x],preorden[x]);
}
void buscarID(char nombre[][25],int id[],int preorden[],int existencia[],float precio[],int idtemp, int total,int bandera){
    if(total!=0){
        for (int i = 0; i < total; ++i) {

            if(idtemp==id[i]){
                imprimirObj(nombre,id,preorden,existencia,precio,idtemp-1);
                bandera=1;
                break;

            } else{
                bandera=0;
            }
        }
        if(bandera==0){
            printf("El ID del producto no existe1\n");
        }
    } else{
        printf("El almacen esta vacio\n");
    }

}

#define MAX_LENGTH 25

int main() {
    //Variables generales
    int opt,id[20],preorden[20],existencia[20],total=0;
    float precio[20];
    char nombre[20][25];
    //Variable para opt 3
    int idtemp;
    //Variable para opt 4
    char password[]="Yumeko19";
    char tryPassword[MAX_LENGTH];
    int bandera,opt2;



    do{
        menu();
        scanf("%i",&opt);
        switch (opt) {
            case 1:
                if(total>=20){
                    printf("Almacen lleno");
                } else{
                    printf("-----Bienvenido al modulo de altas-----\n");
                    altas(nombre,id,preorden,existencia,precio,total);
                    total++;
                }
                break;
            case 2:
                printf("-----Listar----\n");
                if (total!=0){
                    printf("ID.)Nombre  |\tPrecio  |\tExistencia  |\tPunto de reorden|\n");
                    for (int i = 0; i <total ; ++i) {
                        printf("%i.)%s|\t%.2f|\t%i|\t%i|\n",id[i],nombre[i],precio[i],existencia[i],preorden[i]);
                    }
                }else{
                    printf("El almacen esta vacio\n");
                }


                break;
            case 3:
                printf("-----Buscar producto por ID-----\n");
                printf("Ingrese el id que dese buscar:");
                scanf("%i",&idtemp);
                buscarID(nombre,id,preorden,existencia,precio,idtemp, total,bandera);

                break;
            case 4:
                printf("-----Remplazos-----\n");
                printf("Ingrese password:");
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
                fgets(tryPassword,sizeof (tryPassword),stdin);

                if (tryPassword[strlen(tryPassword) - 1] == '\n') {
                    tryPassword[strlen(tryPassword) - 1] = '\0';
                }
                if(strcmp(tryPassword, password) != 0){
                    bandera=0;
                }else{
                    bandera=1;
                }
                if(bandera==0){
                    printf("La password es incorrecta\n");
                } else{
                    if (total!=0)
                    {
                        printf("Ingrese el id del producto que desee modificar:");
                        scanf("%i",&idtemp);
                        buscarID(nombre,id,preorden,existencia,precio,idtemp, total,bandera);

                        do {
                            printf("Que opcion deseas modificar:\n1)Nombre\n2)Precio\n3)Existencia\n4)Punto de re-orden\n5)Salir\nIngrese opcion:");
                            scanf("%i",&opt2);
                            switch (opt2) {
                                case 1:
                                    printf("--Modificar nombre--\n");
                                    printf("Anterior:%s\nNuevo:",nombre[idtemp-1]);
                                    scanf("%s",&nombre[idtemp-1]);
                                    break;
                                case 2:
                                    printf("--Modificar precio--\n");
                                    printf("Anterior:%.2f\nNuevo:",precio[idtemp-1]);
                                    scanf("%f",&precio[idtemp-1]);
                                    break;
                                case 3:
                                    printf("--Modificar Existencia--\n");
                                    printf("Anterior:%i\nNuevo:",existencia[idtemp-1]);
                                    scanf("%i",&existencia[idtemp-1]);
                                    break;
                                case 4:
                                    printf("--Punto de re-orden--\n");
                                    printf("Anterior:%i\nNuevo:",preorden[idtemp-1]);
                                    scanf("%i",&preorden[idtemp-1]);
                                case 5:
                                    printf("Saliendo de la opcion..");
                                default:
                                    printf("Opcion incorrecta");
                                    break;
                            }
                        } while (opt2!=5);
                    } else{
                        printf("El almacen esta vacio\n");
                    }
                }

                break;
            case 5:
                printf("-----Opcion 5-----\n");
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
