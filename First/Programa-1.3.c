#include <stdio.h>

int main(){

    int i;
    float prom,finalprom;
    float arr[5];
    for(i=0;i<5;i++){
        printf("Introduzca el numero %i \n",i+1);
        scanf("%f", &arr[i]);
    }

    for(i=0;i<5;i++){
        printf("El numero en el lugar %i es %.2f\n ",i,arr[i]);
    }

    for(i=0;i<=5;i++){
        prom= prom + arr[i];
    }

    finalprom = prom/5.0;

    printf("%.2f",finalprom);


    return 0;
}