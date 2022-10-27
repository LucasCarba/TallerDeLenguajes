#include <stdio.h>
#include <stdlib.h>
void damePar ();
int main()
{
int n;
printf("Numero de veces que se va a realizar la iteracion: ");
scanf(" %d", &n);
for (int i=1; i<= n; i++)
    {
    damePar();
    }
    return 0;
}

void damePar(){
    static int numpar=(-2);
    numpar+=2;
    printf("numero: %d \n", numpar);
}



