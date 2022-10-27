#include <stdio.h>
#include <stdlib.h>
void unica(float * vector, int *posMax, float *prom, float *min);
int main()
{
    float vector [5];
    int i;
    int posMax;

    float prom=0, min=999;
    float j;
    for (i=0; i<5; i++){
        printf("INGRESE VALOR DE NUMERO CON COMA: \n");
        scanf(" %f", &j );
        vector [i]= j ;
        }
        unica(vector, &posMax, &prom, &min);
        printf("El promedio es : %f \n ", prom);
        printf("El Minimo de sus valores es: %f\n ", min);
        printf("La posicion maxima es: %d\n ",posMax);
return 0;
}
void unica( float * vector, int * posMax, float * prom, float*min)
{
    int i;
    float max=-1.0;
    *min=9999;
    for (i=0; i<5; i++){
         if(vector[i] > max){
            *posMax=i;
            max=vector[i];
        }
        if(vector[i] < *min){
        *min=vector[i];
        }
        *prom+=vector[i];
        }

    *prom/=5;
}

