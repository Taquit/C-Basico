

#include <stdio.h>
#include <process.h>

void main(){

    float abono,meses;

    abono =11000*.25;
    meses =50000/abono;

    printf("El prestamo se pagara en %.2f meses\n", meses );

    system("PAUSE");
}