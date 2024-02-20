#include <stdio.h>
#include <process.h>

void main() {
    float hrsTrabajadas,hrsExtras,salario;
    printf("Cuantas horas trabajaste:");
    scanf("%f",&hrsTrabajadas);
    if(hrsTrabajadas>40){
        hrsExtras=hrsTrabajadas-40.0;
        salario = (hrsExtras*250.0*1.5)+40.0*250.0;
        printf("\nSe te pagara $%.2f con tus horas extras.\n",salario);
    } else{
        salario = hrsTrabajadas*250.0;
        printf("\nSe te pagara $%.2f ya que no trabajaste horas extras\n",salario);
    }

    system("PAUSE");
}
