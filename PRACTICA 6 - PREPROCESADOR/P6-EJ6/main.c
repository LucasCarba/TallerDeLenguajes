#include <stdio.h>
#include <stdlib.h>
#define MAX(x,y) (a>b)?a:b
int main () {
 int a, b;

 scanf("%d%d", &a, &b);
 printf("\n MAX(%d, %d) = %d", a, b, MAX(a,b));
 return 0;
}
