//
// V.3
//Se hace la funcion de listar prodcutos del menu
//
// Se guardan los datos en un arreglo-Se crea la funcion altas-Decir que ID le toco al profuctov.2
//*Lista los productos v.3
#include <stdio.h>
#include <string.h>

void menu(){
    printf("-----Menu principal----");
    printf("\n1)Altas\n2)Listar\n3)Buscar producto\n.\n.\n8)Salir\n");
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

int main() {
    int opt,id[20],preorden[20],existencia[20],total=0;
    float precio[20];
    char nombre[20][25];
    int idtemp, bandera=0;



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
                printf("ID.)Nombre  |\tPrecio  |\tExistencia  |\tPunto de reorden|\n");
                for (int i = 0; i <total ; ++i) {
                    printf("%i.)%s|\t%.2f|\t%i|\t%i|\n",id[i],nombre[i],precio[i],existencia[i],preorden[i]);
                }
                break;
            case 3:
                printf("-----Buscar producto por ID-----\n");
                printf("Ingrese el id que dese buscar:");
                scanf("%i",&idtemp);
                for (int i = 0; i < total; ++i) {

                    if(idtemp==id[i]){
                        imprimirObj(nombre,id,preorden,existencia,precio,idtemp-1);
                        bandera=1;

                    } else{
                        bandera=0;
                    }

                }
                if(bandera==0){
                    printf("El ID del producto no existe1\n");
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

