#include <stdio.h>
#include <stdlib.h>
int n;
void inicializacion (float *vector,int n);
float promedio (float *vector, int n);
float *vector;
float numero;
int main()
{
    int i;
    printf("Ingrese la cantidad de elementos que quiere en el vector: \n");
    scanf(" %d", &n);
    vector = (float*) malloc(n*sizeof(float));
    inicializacion(vector, n);
    printf( "Promedio %.2f \n", promedio(vector, n));
    free(vector);
    return 0;
}
void inicializacion (float *vector, int n){
 int i;
 for (i=0; i<n; i++){
            printf("ingrese numero: \n");
            scanf(" %f", &numero);
            vector[i]=numero;
            }
}
float promedio(float *vector, int n){
int i; float prom=0;
for (i=0; i<n; i++){
    prom+=vector[i];
}
prom/=n;
return prom;
}
