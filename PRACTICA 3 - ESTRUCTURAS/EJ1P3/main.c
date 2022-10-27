#include <stdio.h>
#include <stdlib.h>
#include <math.h>
ingresarValores (struct *rectangulos);
int main()
{
   struct rectangulos {
   float altura;
   float base;
   } rectangulo;
   ingresarValores(&rectangulos);
return 0;
}
ingresarValores(struct *rectangulos){
printf("ingresar base:");
scanf(" %f", rectangulo.base);
printf("ingresar altura:");
scanf(" %f", rectangulo.altura);
}

