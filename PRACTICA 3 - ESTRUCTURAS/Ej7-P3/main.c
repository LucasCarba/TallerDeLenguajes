#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int maximo (int *vector, int n);
int *vector;
int max=-1;
int n,i;
int main()
{
    int numero;
    srand (time(NULL));
    printf("ingrese cantidad: \n");
    scanf(" %d", &n);
    vector = (int*) malloc(n*sizeof(int));
    for (i=0; i<n; i++){
        numero = rand() % 11;
        vector[i]= numero;
        printf( " %d", vector[i]);
    }
    printf("\n El maximo valor es: %d", maximo(vector,n));
    free(vector);
    return 0;
}
 int maximo (int *vector, int n){
    int i;
    for (i=0; i<n; i++){
        if (vector[i] > max){
            max = vector[i];
        }
    }
    return max;
 }
