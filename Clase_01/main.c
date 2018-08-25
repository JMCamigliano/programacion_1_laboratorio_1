#include <stdio.h>
#include <stdlib.h>

int main()
{

    int edad;
    int i;
    i=0;
    float acumulador;
    acumulador=0;
    float promedio;
    int continuar;
    continuar=1;

    /*for(i=0; i<3; i++){

        printf("Ingrese su edad: ");
        scanf("%d", &edad);
        printf("Usted tiene: %d",edad);

    }*/

    while(continuar){

        printf("Ingrese su edad: ");
        scanf("%d", &edad);
        printf("Usted tiene: %d",edad);

        acumulador=acumulador+edad;
        i++;

        printf("¿Desea continuar? (1/0)");
        scanf("%d", &continuar);

    };

    promedio=acumulador/i;

    printf("El promedio de edad es: %f",promedio);

    return 0;
}
