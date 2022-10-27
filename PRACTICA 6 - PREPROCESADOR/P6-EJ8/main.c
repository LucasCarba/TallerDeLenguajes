#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int vector[9];
    int i,n, numero;
    srand (time(NULL));
    for (i=0; i<10; i++){
        numero = rand() % 1000;
        vector[i]= numero;
    }
     for (i=0; i<10; i++)
        printf("%d \n", vector[i]);
     printf("INGRESAR NUMERO A BUSCAR");
     scanf("%d", &n);
     int pos=-1;
     for (i=0; i<10; i++){
        if(n==vector[i])
            pos=i;
     }
    printf("%d \n", pos);
    return 0;
}
