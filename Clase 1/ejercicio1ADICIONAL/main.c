#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int i,codigo, iden1, iden2, cantE;
int cantidad=0;
int min1=9999;
int min2=9999;
float porcentaje;

for (i=1;i<=4;i++) {
    printf ("Ingresar la cantidad de pajaros para el pais %d :", i);
    scanf(" %d", &cantidad);
    printf ("Ingresar el codigo del pais %d:", i);
    scanf (" %d, &codigo");
    if (min1 > cantidad){
        min2=min1;
        iden2=iden1;
        min1=cantidad;
        iden1=i;
    }
    if (min2 > cantidad){
        min2=cantidad;
        iden2=i;
    }
    if (cantidad >= 40) {
        cantE++;
        }
}

printf("El pais con menos cantidad de especies es %d:\n",iden1);
printf("El segundo pais con menos cantidad de especies es %d:\n",iden2);
porcentaje= 14%cantE;
printf ("El porcentaje de paises que tienen mas de 40 especies es %f: \n", porcentaje);
}
