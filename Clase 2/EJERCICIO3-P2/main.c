#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matriz [2][4];
    int i;
    int j;
    int num;
    printf("Ingrese numero por el que desea multiplicar: ");
    scanf(" %d", &num);
    for (i=0; i<2; i++){
        for(j=0; j< 4; j++){
            printf("Ingresar numero en la fila %d y columna %d :", i, j);
            scanf (" %d", &matriz[i][j]);
            printf("fila %d columna %d : %d \n", i, j, (matriz[i][j]*num));

        }
    }
    return 0;
}
