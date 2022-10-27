#include <stdio.h>
int main()
{
int x[5]={1,2,3,4,5};
 int * p = x;
 printf("La direccion memoria de p es %p \n", &p);
 printf("La direccion la que apunta p es %p \n", p);
 printf("El valor al que apunta p es %d \n", *p);
 p++;
 printf("La direccion memoria de p ahora es %p \n", &p);
 printf("La direccion la que apunta p ahora es %p \n", p);
 printf("El valor al que apunta p ahora es %d \n", *p);
 return 0;
}
