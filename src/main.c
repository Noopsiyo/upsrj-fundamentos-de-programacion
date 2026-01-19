#include <stdio.h>

int main(){

    float lado, area, volumen;

    printf("===========================================================\n");
    printf("                CALCULO DE AREA Y VOLUMEN\n");
    printf("===========================================================\n\n");
     
    printf("ingrese valor de lado:");
    scanf("%f", &lado);

    if(lado <= 0)
    {printf("\nError: el lado debe ser positivo.\n");
        return 1;

}
area = lado * lado;

volumen = lado * lado *lado;



printf ("\n--------------------------------------------");
printf ("RESULTADOS:\n");
printf("--------------------------------------------\n");
printf("lado ingresado: %2f\n", lado);
printf("area del cuadrado: %.2f unidades cuadradas\n", area);
printf("volumen de cubo: %.2f unidades cubicas\n", volumen);
printf("----------------------------------\n");

return 0;

}
