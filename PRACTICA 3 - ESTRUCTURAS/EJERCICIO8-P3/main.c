#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
struct p{
int dni[10];
char nombre[10];
char apellido[20];
char sexo[20];
};
typedef struct p persona;
int cantidad;
void poblar(persona **, int, int, int, int);
int main()
{
    float promedio;
    int num ,i,n;
    printf(" INGRESAR NUMERO DE BARRIOS: ");
    scanf(" %d",&num);
    persona **matriz;
    matriz= (persona**) calloc(num,sizeof(persona *));
    for(i=0; i<num; i++){
        printf(" INGRESAR NUMERO DE PERSONAS: ");
        scanf(" %d",&n);
        matriz[i]= (persona*) calloc(n,sizeof(persona));
        poblar (matriz, num, i, n, cantidad);
    }
        promedio = cantidad /(num * n);
        printf("%.1f", promedio);
    return 0;
}
void poblar (persona **matriz,int num, int i, int n, int cantidad)
{
    char s[20]="MUJER";
    for (int j=0; j<n; j++){
        printf("NOMBRE: ");
        scanf(" %s", matriz[i][j].nombre );
        printf("APELLIDO: ");
        scanf(" %s", matriz[i][j].apellido );
        printf("DNI: ");
        scanf(" %d" , matriz[i][j].dni);
        printf("SEXO: ");
        scanf(" %s", matriz[i][j].sexo );
        if ( (strcmp(matriz[i][j].sexo, s))  == 0) {
            cantidad++;
            }
        }
    }
