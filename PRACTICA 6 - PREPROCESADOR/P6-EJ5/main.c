#include <stdio.h>
#include <stdlib.h>
#define  AREA_CIRCULO(r) 3.14*r*r

int main()
{
    int i;
    float num;
    for (i=0; i<10; i++){
        printf("INGRESE NUMERO: \n");
        scanf("%f", &num);
        printf(" \n %g ", AREA_CIRCULO(num));
    }
    return 0;
}
