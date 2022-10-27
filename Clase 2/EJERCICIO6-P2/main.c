#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digito, i, numero, cant=0;
    int vector[10];
    printf("Ingrese numero: \n");
    scanf(" %d", &numero);
    while (numero != 0) {
        digito= numero % 10;
        numero = numero / 10;
        vector[cant]= digito;
        cant+=1;
    }
    for (i=0; i>cant; i++ ){


    }
        return 0;
}
