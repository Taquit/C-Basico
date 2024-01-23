#include <stdio.h>

int main()
{
    int num;
    int tipo;
    printf("Esta aplicacion hara conversiones de cm, mm y km\n");
    printf("\nIntroduzca la cifra deseada a convertir (solo los numeros): \n");
    scanf("%d", & num);
    printf("\nIntroduzca el numero que indique el  tipo de unidad de medida que esta usando 1->cm, 2->mm o 3->km): \n");
    scanf("%d\n", & tipo);
    
    switch (tipo)
    {
    case 1:
        
        gotCM(num);
        break;
    case 2:
        gotMm(num);
        break;
    case 3:
        gotKm(num);
        break;
    default:
        printf("ERROR!!!Introdujo mal el tipo de unidad de medida que tiene");
        break;
    }
    return 0;
}

void gotCM(int a){
    int mm = a *10;
    float km = a / 100000;
    printf("%d %f %d %f", "El valor que puso: "a, "a mm es: "mm);
    printf("%d %f", a, km);
    
}
void gotMm(int a){
    int cm = a/10;
    float km = a/1000000;
    printf("\n%dmm son: %dcm\n", a, cm);
    printf("\n%dmm son: %fkm", a, km);
}
void gotKm(int a){
    int cm = a * 100000;
    int mm = a * 1000000;
    printf("\n%dkm son: %dcm\n", a, cm);
    printf("\n%dkm son: %dmm", a, mm);
}
