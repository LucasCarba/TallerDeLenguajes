#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()

{
    char cadena[20];
    char string[20];
    char corte[4] = {'X', 'X', 'X', '\0'};
    int i,cant=0;
    int comparacion, longitud;
    printf("Ingrese palabra:");
    fflush(stdin);//para limpiar el buffer
    scanf (" %s", cadena);
    comparacion=strcmp(corte,cadena);
     for (i=0; candena[i]!= '\0'; i++){
        string[i]= cadena[i];
    }
    longitud=strlen(string);
    if(string[longitud] == 'o'){
        cant+=1;
    }
     while( comparacion != 0 ){

    printf("Ingrese palabra:");
    fflush(stdin);//para limpiar el buffer
    scanf (" %s", cadena);
    comparacion=strcmp(corte,cadena);
    longitud=strlen(cadena);
    for (i=0; candena[i]!= '\0'; i++){
        string[i]= cadena[i];
    }
    longitud=strlen(string);
    if(string[longitud] == 'o'){
        cant+=1;
    }
    }
    }
printf("CANTIDAD DE PALABRAS TERMINADAS EN o : %d ", cant);
    return 0;
}

