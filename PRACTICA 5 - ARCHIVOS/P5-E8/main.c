#include <stdio.h>
#include <stdlib.h>
struct jugadores {
char nombre[20];
char apellido[20];
int edad;
int titulos;
int ranking;
float fortuna;
};

void ingresarDatos();
void recuperarInfo();
int main()
{
    for (int i=0; i<2; i++){
        ingresarDatos();
    }
    recuperarInfo();
    return 0;
}
void ingresarDatos(){
    struct jugadores j;
    FILE* arch;
    arch= fopen("jugador.txt", "ab");
    if (arch== NULL){
        perror("ERROR! \n");
    } else{
            printf("NOMBRE:");
            scanf("%s", j.nombre);
            fflush(stdin);
            printf("APELLIDO:");
            scanf("%s", j.apellido);
            fflush(stdin);
            printf("EDAD:");
            scanf("%d", &(j.edad));
            fflush(stdin);
            printf("TITULOS:");
            scanf("%d", &(j.titulos));
            fflush(stdin);
            printf("RANKING:");
            scanf("%d", &(j.ranking));
            fflush(stdin);
            printf("FORTUNA:");
            scanf("%f", &(j.fortuna));
            fflush(stdin);
            fwrite(&j,sizeof(struct jugadores), 1, arch);
            fclose(arch);
}}


void recuperarInfo(){
int rank=999,i;
char nombre[20];
char apellido[20];

struct jugadores j;
struct jugadores nya;
    FILE* arch;
    arch= fopen("jugador.txt", "rb");
    if (arch== NULL){
        perror("ERROR! \n");
    } else{
    fread(&j,sizeof(struct jugadores),1,arch);
    while(!feof(arch)){
        if(j.ranking < rank){
            rank=j.ranking;
            nya=j;
        }
        fread(&j,sizeof(struct jugadores),1,arch);
    }
  printf("%s",nya.apellido);
  printf("%s",nya.nombre);
}
fclose(arch);
}
