#include <stdio.h>
#include <stdlib.h>
char *vector;
int main()
{
    int i,j;
    vector = (char*) calloc(100,sizeof(char));
    for (i=0; i<10; i++){
        fgets(vector, 100, stdin);
        for(j=0; j<100; j++){
            if(vector[j] >= 'a' && vector[j] <= 'z')
                printf("\n-> Es minuscula ");
            else if(vector[j] >= 'A' && vector[j] <= 'Z')
                printf("\n-> Es mayuscula ");
                else
                printf("\n-> No es una letra ");
        }
    }
    free(vector);
    return 0;
}
