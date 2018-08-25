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

    /*for(i=0; i<3; i++){

        printf("Ingrese su edad: ");
        scanf("%d", &edad);
        printf("Usted tiene: %d",edad);

    }*/

    while(i<3){

        printf("Ingrese su edad: ");
        scanf("%d", &edad);
        printf("Usted tiene: %d",edad);

        i++;

        acumulador=acumulador+edad;

    };

    promedio=edad/i;

    printf("El promedio de edad es: %f",promedio);

    return 0;
}
