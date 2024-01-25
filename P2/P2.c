#include <stdio.h>

int main()
{
    int num;
    int tipo;
    printf("Esta aplicacion hara conversiones de cm, mm y km\n");
    printf("\nIntroduzca la cifra deseada a convertir (solo los numeros): \n");
    scanf("%d", & num);
    printf("\nIntroduzca el numero que indique el  tipo de unidad de medida que esta usando 1->cm, 2->mm, 3->km, 4->met : \n");
    scanf("%d", & tipo);
    
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
    case 4:
        gotMet(num);
        break;
    default:
        printf("ERROR!!!Introdujo mal el tipo de unidad de medida que tiene");
        break;
    }
    return 0;
}

void gotCM(int a){
    int mm = a *10;
    float km = a / 100000.0;
    float m = a /10.0;
    printf("%dcm son: %dmm\n", a, mm);
    printf("\n%dcm son: %.6fkm\n", a, km); 
    printf("\n%dcm son: %.6fmet\n", a, m);

}

void gotMm(int a){
    float cm = a/10.0;
    float km = a/1000000.0;
    float m = a /1000.0;
    printf("\n%dmm son: %.6fcm\n", a, cm);
    printf("\n%dmm son: %.6fkm\n", a, km);
    printf("\n%dmm son: %.6fmet\n", a, m);

}
void gotKm(int a){
    int cm = a * 100000;
    int mm = a * 1000000;
    int m = a *1000;
    printf("\n%dkm son: %dcm\n", a, cm);
    printf("\n%dkm son: %dmm\n", a, mm);
    printf("\n%dkm son: %dmet\n", a, m);

}
void gotMet(int a){
    int cm = a *100;
    int mm = a *1000;
    float km = a /1000.0;
    printf("\n%dmet son: %dcm\n", a, cm);
    printf("\n%dmet son: %f.6km\n", a, km);
    printf("\n%dmet son: %dmm\n", a, mm);
}
