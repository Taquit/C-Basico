#include <stdio.h>
void main(){
    float num,cm, mm, km;

    printf("Esta aplicacion hara conversiones de m a cm, mm y km\n");
    printf("\nIntroduzca la cifra deseada a convertir:  \n");
    scanf("%f", & num);
    cm = num *100.0;
    mm = num * 1000.0;
    km = num /1000.0;

    printf("\n %.3f m son %.3f mm", num,mm);
    printf("\n %.3f m son %.3f cm", num,cm);
    printf("\n %.3f m son %.3f km\n", num,km);

    system("PAUSE");
}