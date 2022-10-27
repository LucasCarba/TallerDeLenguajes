#include <stdio.h>
#include <stdlib.h>
float prom(float[]);
float min (float[]);
int posMax (float[]);

int main()
{
    float vector [5];
    int i;
    float j;
    for (i=0; i<5; i++){
        printf("INGRESE VALOR DE NUMERO CON COMA: \n");
        scanf(" %f", &j );
        vector [i]= j ;
        }
        printf("El promedio es : %f \n ", prom(vector));
        printf("El Minimo de sus valores es: %f\n ", min(vector));
        printf("La posicion maxima es: %d\n ", posMax (vector));
return 0;
}
int posMax( float vector[5])
{
    int i;
    float max=-1;
    static int posmaxima=0;
    for (i=0; i<5; i++){
        if(vector[i] > max){
            posmaxima=i;
            max=vector[i];
        }
   }
   return posmaxima;
}
float prom (float vector[5])
{
int i;
static float promedio=0;
    for (i=0; i<5; i++){
        promedio+=vector[i];
        }
    promedio/=5;
return promedio;
}
float min (float vector[5])
{
  int i;
  static float minimo=99999;
  for (i=0; i<5; i++){
    if(vector[i] < minimo){
        minimo=vector[i];
        }
  }
return minimo;
}
