#include <stdio.h>
#include <stdlib.h>
struct direccion {
 char calle[50];
 char ciudad[30];
 int codigo_postal;
 char pais[40];
};

struct alu{
 char apellido[50];
 char nombre [50];
 char legajo [8];
 float promedio;
 struct direccion dir;
};
void ingresar(struct alu a[], int i);
void promedio(struct alu a[]);

int main()
{
int i;
struct alu a[2];
for (i=0; i<2; i++){
    ingresar(a, i);
}
promedio(a);
}

void promedio(struct alu a[]){
int j;
float pmax = -1;
char nmax, amax;
for (j=0; j<2; j++){
    if( (a[j].promedio) > pmax){
        pmax = a[j].promedio;
        nmax = a[j].nombre;
        amax = a[j].apellido;
    }
}
printf(" %s %s ", nmax, amax);

}

void ingresar(struct alu a[], int i){
    printf("ingresar apellido:");
    scanf(" %s", (a[i].apellido));
    printf("ingresar nombre:");
    scanf(" %s", (a[i].nombre));
    printf("ingresar legajo:");
    scanf(" %s", (a[i].legajo));
    printf("ingresar promedio:");
    scanf(" %f", &(a[i].promedio));
    printf("ingresar calle:");
    scanf(" %s", (a[i].dir.calle));
    printf("ingresar ciudad:");
    scanf(" %s", (a[i].dir.ciudad));
    printf("ingresar codigo postal:");
    scanf(" %d", &(a[i].dir.codigo_postal));
    printf("ingresar pais:");
    scanf(" %s", (a[i].dir.pais));
}
