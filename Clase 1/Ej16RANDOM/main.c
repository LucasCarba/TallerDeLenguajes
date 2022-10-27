#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    srand (getpid());
    int i, numero, N;
    for (i = 0; i<15; i++) {
        numero = rand() % 11;
        printf(" %d ", numero);
    }
    return 0;
}
