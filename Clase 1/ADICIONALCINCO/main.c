#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int suma(dado1,dado2);
int main()
{
    int dado1, dado2;
    int suma=0;
    int suma2=0;



    printf("Tire el primer dado (numero del 1 al 6):\n");
    scanf(" %d", &dado1);
    printf ("Tire el segundo dado (numero del 1 al 6):\n");
    scanf (" %d", &dado2);
    suma= dado1+dado2;
    if ((suma == 2) || (suma == 12)){
        printf ("FIN DEL JUEGO");
    }
    if ((suma == 7) || (suma == 11)){
        printf ("GANADOR");
    }
if ((suma != 2) && (suma != 12) && (suma != 7) && (suma != 11))
    {
    while (suma2 != suma)
    {
    printf("Tire el primer dado (numero del 1 al 6):\n");
    scanf(" %d", &dado1);
    printf ("Tire el segundo dado (numero del 1 al 6):\n");
    scanf (" %d", &dado2);
    suma2= dado1+dado2;
    }
}
    return 0;
}
int suma( dado1, dado2) {
}
