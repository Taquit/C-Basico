
#include <stdio.h>
#include <string.h>

void menu(){
    printf("-----Menu principal----");
    printf("\n1)Altas\n2)Listar\n3)Buscar producto\n4)Remplazos\n5)Entrega de producto\n6)Reabastecer\n7)Bajas\n8)Salir\n");
    printf("Ingresa opcion:");

}
void altas(char nombre[][25],int id[],int preorden[],int existencia[],float precio[],int maximo[],int total){
    printf("Dame el nombre del producto:");

    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Limpiar el búfer de entrada
    fgets(nombre[total], sizeof(nombre[total]), stdin);
    if (nombre[total][strlen(nombre[total]) - 1] == '\n') { //Limpiar el ultimo caracter ingresado
        nombre[total][strlen(nombre[total]) - 1] = '\0';
    }
    printf("Dame la existencia:");
    scanf("%i",&existencia[total]);
    printf("Dame el precio:");
    scanf("%f",&precio[total]);
    printf("Dame el punto de re-orden:");
    scanf("%i",&preorden[total]);
    printf("Dame el maximo de producto:");
    scanf("%i",&maximo[total]);
    id[total]=total+1;
    printf("El id del producto es: %i\n",id[total]);
    printf("Alta exitosa!\n");

}
void imprimirObj(char nombre[][25], int id[], int preorden[], int existencia[], float precio[], int x) {
    printf("%-5s | %-25s | %-10s | %-12s | %-15s |\n", "ID", "Nombre", "Precio", "Existencia", "Punto de reorden");
    printf("%-5i | %-25s | %-10.2f | %-12i | %-15i |\n", id[x], nombre[x], precio[x], existencia[x], preorden[x]);
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
    int opt,opt2,id[19],preorden[19],existencia[19],maximo[19],pedido[19],total=0;
    float precio[19];
    char nombre[19][25];
    //Variables de contraseña
    char password[]="Yumeko19";
    char tryPassword[MAX_LENGTH];
    //Variables temporales
    int idtemp,bandera,existemp;




    do{
        menu();
        scanf("%i",&opt);
        switch (opt) {
            case 1:
                if(total>=20){
                    printf("Almacen lleno");
                } else{
                    printf("-----Bienvenido al modulo de altas-----\n");
                    altas(nombre,id,preorden,existencia,precio,maximo,total);
                    total++;
                }
                break;
            case 2:
                printf("-----Listar----\n");
                if (total!=0){
                    printf("%-5s | %-25s | %-10s | %-12s | %-15s |\n", "ID", "Nombre", "Precio", "Existencia", "Punto de reorden");
                    for (int i = 0; i <total ; ++i) {

                        printf("%-5i | %-25s | %-10.2f | %-12i | %-15i |\n", id[i], nombre[i], precio[i], existencia[i], preorden[i]);
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
                while ((c = getchar()) != '\n' && c != EOF); // Limpiar el búfer de entrada
                fgets(tryPassword, sizeof(tryPassword), stdin);
                if (tryPassword[strlen(tryPassword) - 1] == '\n') { //Limpiar el ultimo caracter ingresado
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
                            printf("Que opcion deseas modificar:\n1)Nombre\n2)Precio\n3)Existencia\n4)Punto de re-orden\n5)Maximo\n6)Saliendo\nIngrese opcion:");
                            scanf("%i",&opt2);
                            switch (opt2) {
                                case 1:
                                    printf("--Modificar nombre--\n");
                                    printf("Anterior:%s\nNuevo:",nombre[idtemp-1]);
                                    fflush(stdin); // Limpiar el búfer de entrada
                                    fgets(nombre[idtemp-1], sizeof(nombre[idtemp-1]), stdin);
                                    if (nombre[idtemp-1][strlen(nombre[idtemp-1]) - 1] == '\n') { //Limpiar el ultimo caracter ingresado
                                        nombre[idtemp-1][strlen(nombre[idtemp-1]) - 1] = '\0';
                                    }

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
                                    printf("--Maximo de producto--\n");
                                    printf("Anterior:%i\nNuevo:",maximo[idtemp-1]);
                                    scanf("%i",&maximo[idtemp-1]);
                                case 6:
                                    printf("Saliendo de la opcion..");
                                default:
                                    printf("Opcion incorrecta");
                                    break;
                            }
                        } while (opt2!=6);
                    } else{
                        printf("El almacen esta vacio\n");
                    }
                }

                break;
            case 5:
                printf("-----Entrega de producto-----\n");
                if(total!=0){
                    printf("Ingrese el ID del producto:");
                    scanf("%i",&idtemp);
                    buscarID(nombre,id,preorden,existencia,precio,idtemp,total,bandera);
                    printf("Ingresa la cantidad que dese entregar:");
                    scanf("%i",&existemp);
                    if (existemp<=existencia[idtemp-1]){
                        existencia[idtemp-1]=existencia[idtemp-1]-existemp;
                        printf("Se restaran %i de %s\n",existemp,nombre[idtemp-1]);

                    } else{
                        printf("La cantidad solicitada es mayor a la cantidad de producto en existenica. Desea entregar los que hay en existencia?\n1.)Si\n2.)No\nEliga opcion:");
                        scanf("%i",&opt2);
                        switch (opt2) {
                            case 1:
                                existencia[idtemp-1]=0;
                                printf("Quedaron %i de %s.\n El producto se quedo sin existencia!\n",existencia[idtemp-1],nombre[idtemp-1]);
                                break;
                            case 2:
                                printf("Saliendo de la opcion 5...\n");
                                break;
                            default:
                                printf("Opcion incorrecta\n");
                                break;
                        }
                    }
                } else{
                    printf("El alcamen esta vacio\n");
                }

                break;
            case 6:
                printf("-----Reabastecer-----\n");
                float monto=0;
                for (int i = 0; i < total; ++i) {
                    if(existencia[i]<preorden[i]){
                        pedido[i]=maximo[i]-existencia[i];


                    } else{
                        pedido[i]=0;
                    }
                    printf("ID\t|Pedido\n");
                    printf("#%i\t|%i\n",id[i],pedido[i]);
                    if(pedido[i]!=0){
                        printf("\nDesea reabastecer los producto?\n1)Si\n2)No\n");
                        scanf("%i",&bandera);
                        if(bandera==1){
                            existencia[i]=pedido[i]+existencia[i];
                            monto = monto+ pedido[i] * precio[i];
                        }
                    }

                }
                printf("El monto a pagar fue de %.2f\n",monto);
                break;
            case 7:
                printf("-----Bajas-----\n");
                printf("Dame el ID del elemento a dar de baja:");
                scanf("%i",&idtemp);
                buscarID(nombre,id,preorden,existencia,precio,idtemp,total,bandera);
                for (int i = 0; i < total; ++i) {
                    if(idtemp ==id[i]){
                        for (int j = i; j <total ; ++j) {
                            id[j]=id[j+1];
                            strcpy(nombre[j],nombre[j+1]);
                            preorden[j]=preorden[j+1];
                            existencia[j]=existencia[j+1];
                            precio[j]=precio[j+1];
                            maximo[j]=maximo[j+1];
                            total--;
                            printf("Producto borrado con exito\n");
                        }
                    }
                }
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