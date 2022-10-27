#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void poblar(int **, int);
void mostrar(int **,int);
 int i,j;
int main(void)
{

    int num, n=1;
    printf("INGRESAR NUMERO: ");
    scanf("%d",&num);
    int **matriz;
    matriz= (int**) calloc(num,sizeof(int *));
    for(i=0; i<num; i++){
        matriz[i]= (int*) calloc(n,sizeof(int));
        if(n<num)
            n++;
    }
     poblar(matriz,num);
     mostrar(matriz,num);
return 0;
}
void poblar (int **matriz,int num){
    static int n;
    int i,j, cant=1;
    for(i=0; i<num ;i++){
        for(j=0 ; j < cant ; j++){
            printf("Numero: ");
            scanf(" %d", &n);
            matriz[i][j]=n;
        }
        if(cant < num){
            cant+=1;}
    }
    }
void mostrar (int **matriz,int num){
int i,j, cant=0;
printf("ENTRO");
for (i=0; i< num; i++){
    printf("\n");
    for(j=0; j<= cant; j++){
        printf("%d ", matriz[i][j]);
        }
        ++cant;
    }
}

