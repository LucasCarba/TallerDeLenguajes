#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrizA [3][3];
    int matrizB [3][3];
    int i;
    int j;
    for (i=0; i<3; i++){
        for(j=0; j< 3; j++){
            printf("Ingresar numero en la fila %d y columna %d :", i, j);
            scanf (" %d", &matrizA[i][j]);
        }}
    for (i=0; i<3; i++){
        for(j=0; j< 3; j++){
            matrizB[i][j]= matrizA[j][i];
            printf( "La fila %d y columna %d tienen valor %d \n", i, j, matrizB[i][j]);
        }
    }
}
