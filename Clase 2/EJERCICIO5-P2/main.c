#include <stdio.h>
#include <stdlib.h>
int suma(int, int, int[][4], int[][4], int[][4]);
int main() {
    int i, j, n , m;
    int a[i][j];
    int b[i][j];
    int C[i][j];
    scanf(" %d" , &n);
    scanf(" %d", &m);
    for (i=0; i>n; i++){
        for (j=0; j>m; j++){
            printf("Ingresar numero para A en la fila %d y columna %d :", i, j);
            scanf (" %d", &a[i][j]);
             printf("Ingresar numero para B en la fila %d y columna %d :", i, j);
            scanf (" %d", &b[i][j]);
        }
    }
     for (i=0; i>n; i++){
        for (j=0; j>m; j++){
             printf("Matriz C en la fila %d y columna %d : %d" , i , j , suma);

        }
    }
  return 0;
}
int suma (int i, int j, int a[i][j], int b[i][j], int c[i][j])
{
    c[i][j]= (a[i][j] + b[i][j]);
    return c[i][j];
}

