#include <stdio.h>


int main()
{
    int suma, cont, numero, mayor;
    cont=0;
    suma=0;
    printf("Ingresar numero: \n");
    scanf( "%d" , &numero);
    mayor=numero;
    while (numero!= -1) {
        cont++;
        suma += numero;
        if(numero>mayor)
            mayor=numero;
        printf("Ingresar numero: \n");
        scanf("%d", &numero);
    }

    printf("El promedio es %.2f: \n", (float)suma/cont);
    printf("El mayor es %d: ", mayor);
   return 0;
}
