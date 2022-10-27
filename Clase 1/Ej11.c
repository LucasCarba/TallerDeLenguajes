#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
int factorial(a);
{
int a,i,b,factorial;
printf("ingresar numero");
scanf("%d",&a);
factorial=1;
for (i=1;i<=(a);i++){
    factorial*=i;
    }
printf("el factoria de %d es %d\n",a,factorial);
}
