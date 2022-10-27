#include <stdio.h>
int main(){
int x, y;
int operacion=0;
char a;
printf("Ingrese dos numeros y un caracter: ");
scanf("%d", &x);
scanf(" %d", &y);
scanf(" %c", &a);
if (a=="*"){
operacion=x*y;
printf("La operacion es %d ", operacion);
}
if(a=="+") {
operacion=x+y;
printf("La operacion es %d ", operacion);
}
if(a=="-"){
operacion=x-y;
printf("La operacion es %d ", operacion);
}
if (a=="/"){
operacion=x/y;
printf("La operacion es %f ", (float)operacion);
}
if ((a!= "/") && (a!= "+") && (a!= "-") && (a!= "*")) {
printf ("ERROR");
}

 return 0;
}
