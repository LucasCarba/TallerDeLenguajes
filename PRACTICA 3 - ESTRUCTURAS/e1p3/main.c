#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct rectangulos {
   float altura;
   float base;
   };

void ingresar(struct rectangulos *rec[]);
float area(struct rectangulos rec);
int main()
{
   //struct rectangulos rec;
   int i;
   float a, areamin=9999;
   struct rectangulos rec[10];
   for(i=0; i<10; i++){
        ingresar(&rec);
        a= area(rec);
        if(a < areamin){
       areamin= a;
     }
}
   ingresar(&rec);
   printf("El area es: %f", area(rec));
return 0;
}
void ingresar( struct rectangulos *rec){
    printf("ingresar base:");
    scanf(" %f", &(rec->base));//Forma 1
    printf("ingresar altura:");
    scanf(" %f", &((*rec).altura));//Forma 2
}
float area(struct rectangulos rec)
{
   float a;
    a=(rec.base) * (rec.altura);
    return a;
}
