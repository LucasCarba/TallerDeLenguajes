#include <stdio.h>
#include <stdlib.h>
int swap(int *vector, int a, int b, int i, int j);
int main()
{
    int i,j;
    int vector [6]={2,4,6,8,10,12};
    for (i=0; i<6; i++){
        j=6-i;
        swap(vector, vector[i],vector[6-i], i, j);
        }
    for (i=0; i<6; i++){
        printf(" valores %d", vector[5-i]);
}

}
int swap(int * vector, int a, int b, int i, int j)
{
 static int aux[6]={2,4,6,8,10,12};
 int tmp;
 tmp = a; // guarda el valor de a
 a = b; // almacena b en a
 b = tmp; // almacena a en b
 aux[i]=b;
 aux[j]=a;
 return aux;
}

