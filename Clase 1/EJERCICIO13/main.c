#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void invertir(int num);
int main()
{
 int num;
 printf("Ingresar numero : \n");
 scanf(" %d", num);
 invertir(&num);
 return 0;

 }
 void invertir(int num){
    int digito;
    while (num != 0)
        {
        digito = num % 10;
        printf(" %d", digito);
        num = num / 10 ;
        }

 }
