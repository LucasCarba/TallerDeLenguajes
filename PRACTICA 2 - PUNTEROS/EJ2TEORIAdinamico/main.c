#include <stdio.h>
#include <stdlib.h>

int main()
{
    int peso,i;
    int *vector;
    i=0;
    printf("Ingrese Peso: \n");
    scanf(" %d", &peso );
    while( (peso > 0) && (peso< 250) ){
        vector = (int*)realloc(*int vector, size_t 10);
        vector[i]= peso;
        if (i < 10){
            i++;
        }
        else {
            vector = int*realloc(int*vector,size_t i+10);
        }
        printf("Ingrese Peso: \n")
        scanf(" %d", &peso );
        }
    return 0;
}
