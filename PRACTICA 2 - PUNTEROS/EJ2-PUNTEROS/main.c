#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1;
    int b=2;
    int c=4;
    int *p1, *p2;
    p1= &a;
    p2= &c;
    *p1=(*p2)++;
    printf("a %d, b %d, c d%, p1 %d, p2 %d", a, b, c, *p1, *p2);
}
