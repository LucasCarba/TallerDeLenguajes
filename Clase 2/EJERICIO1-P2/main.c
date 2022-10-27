#include <stdio.h>
#include <stdlib.h>
void EsPar(int j);
int main()
{
    int i, j, numero = 0;
    int vectorEnteros [50];
    srand (getpid());

    for (i = 0; i<50; i++) {
        numero = rand() % 11;
        vectorEnteros[i]=numero;
        printf("%d \n", vectorEnteros[i]);
    }
    for (i = 1; i < 50; i=+2){
        esPar(vectorEnteros[i]);
    }
    return 0;
}

void esPar(int j){
    int numpar=0;
    numpar = j % 2;
    if (numpar == 0) {
       printf("El numero %d es par  \n", j);
    }
}

