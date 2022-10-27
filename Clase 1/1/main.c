/*Mi primer programa C */
#include <stdio.h>

int main()
{
    int f;
    float c;
    printf ("Ingrese Valor en fahrenheit: \n ");
    scanf("%d",&f);
    c=((float)5/9)*(f-32);
    printf("En grados celcius %.2f", c );
    return 0;
}
