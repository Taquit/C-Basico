#include <stdio.h>

void main() {
    int edad;
    printf("Introduce tu edad:\n");
    scanf("%i",&edad);

    if(edad<=12){
        printf("Eres un nino");
    }
    if((edad>13)&&(edad<=18)){
        printf("Eres un adolecente");
    }
    if((edad>19)&&(edad<=25)){
        printf("Eres un joven");
    }
    if((edad>26)&&(edad<=59)){
        printf("Eres un adulto");
    }
    if(edad >=60){
        printf("Eres un adulto de la tercera edad");
    }

}
