#include <stdio.h>
#include <string.h>

void menu(){
    printf("1)Altas\n2)Listar\n.\n.\n.\n8)Salir\n");
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
    printf("Alta exitosa!\n");

}

int main() {
    int opt,id[20],preorden[20],existencia[20],total=0;
    float precio[20];
    char nombre[20][26];
    printf("Dame el nombre del producto:");

    fgets(nombre[0], 26, stdin);

    printf("Dame la existencia:");
    scanf("%i",&existencia[total]);
    printf("Dame el precio:");
    scanf("%f",&precio[total]);
    getchar();
    printf("Dame el punto de re-orden:");
    scanf("%i",&preorden[total]);
    printf("%s",nombre[0]);
    printf("%s",nombre[1]);
}