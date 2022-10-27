#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char cadena[20];
    char corte[4] = {'z', 'z', 'z', '\0'};
    int cant=0;
    int longitud, comparacion;
    printf("Ingrese palabra:");
    scanf (" %s", cadena);
    comparacion=strcmp(corte,cadena);
    longitud=strlen(cadena);
    if(longitud == 5){
        cant += 1;
    }
    while (comparacion != 0){
    printf("Ingrese palabra:");
    fflush(stdin);//para limpiar el buffer
    scanf (" %s", cadena);
    longitud=strlen(cadena);
    if(longitud == 5){
        cant += 1;
    }
    comparacion=strcmp(corte,cadena);
    }
    printf("La cantidad de palabras con 5 digitos es %d:", cant);
    return 0;
}
