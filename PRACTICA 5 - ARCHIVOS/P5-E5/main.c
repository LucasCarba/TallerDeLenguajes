#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
int codigo;
float apuesta;
} juego;
int main() {
    float total=0;
    FILE* arch;
    juego j;
    arch= fopen("apuestas.txt", "r");
    if (arch== NULL){
        perror("ERROR! \n");
    }
    else{
        fscanf(arch, "%d|%f;", &j.codigo, &j.apuesta);
        while(!feof(arch)){
            total+=j.apuesta;
            fscanf(arch, "%d|%f;", &j.codigo, &j.apuesta);

        }
    }
    fclose(arch);
    printf("%.2f",total);
    return 0;
}
